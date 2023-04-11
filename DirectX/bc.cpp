//-------------------------------------------------------------------------------------
// BC.cpp
//
// Block-compression (BC) functionality for BC1, BC2, BC3 (orginal DXTn formats)
//
// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
//
// http://go.microsoft.com/fwlink/?LinkId=248926
//-------------------------------------------------------------------------------------

#include <iostream>
#include <assert.h>
#include <float.h>
#include <memory.h>
#include "bc.h"

namespace DirectX
{
  //-------------------------------------------------------------------------------------
  // Constants
  //-------------------------------------------------------------------------------------

  const uint32_t XM_SELECT_0   = 0x00000000;
  const uint32_t XM_SELECT_1   = 0xFFFFFFFF;

  // Perceptual weightings for the importance of each channel.
  const HDRColorA g_Luminance(0.2125f / 0.7154f, 1.0f, 0.0721f / 0.7154f, 1.0f);
  const HDRColorA g_LuminanceInv(0.7154f / 0.2125f, 1.0f, 0.7154f / 0.0721f, 1.0f);
  const XMVECTORF32 g_XMIdentityR3 = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
  const XMVECTORU32 g_XMSelect1110 = {{{XM_SELECT_1, XM_SELECT_1, XM_SELECT_1, XM_SELECT_0}}};

  //-------------------------------------------------------------------------------------
  // Decode/Encode RGB 5/6/5 colors
  //-------------------------------------------------------------------------------------
  inline void Decode565(HDRColorA *pColor, const uint16_t w565) noexcept
  {
    pColor->r = static_cast<float>((w565 >> 11) & 31) * (1.0f / 31.0f);
    pColor->g = static_cast<float>((w565 >> 5) & 63) * (1.0f / 63.0f);
    pColor->b = static_cast<float>((w565 >> 0) & 31) * (1.0f / 31.0f);
    pColor->a = 1.0f;
  }

  inline uint16_t Encode565(const HDRColorA *pColor) noexcept
  {
    HDRColorA Color;

    Color.r = (pColor->r < 0.0f) ? 0.0f : (pColor->r > 1.0f) ? 1.0f
                                                             : pColor->r;
    Color.g = (pColor->g < 0.0f) ? 0.0f : (pColor->g > 1.0f) ? 1.0f
                                                             : pColor->g;
    Color.b = (pColor->b < 0.0f) ? 0.0f : (pColor->b > 1.0f) ? 1.0f
                                                             : pColor->b;
    Color.a = pColor->a;

    uint16_t w;

    w = static_cast<uint16_t>(
        (static_cast<int32_t>(Color.r * 31.0f + 0.5f) << 11) | (static_cast<int32_t>(Color.g * 63.0f + 0.5f) << 5) | (static_cast<int32_t>(Color.b * 31.0f + 0.5f) << 0));

    return w;
  }

  void XMStoreFloat4(XMFLOAT4 *pDestination, FXMVECTOR V)
  {
    pDestination->x = V.vector4_f32[0];
    pDestination->y = V.vector4_f32[1];
    pDestination->z = V.vector4_f32[2];
    pDestination->w = V.vector4_f32[3];
  }

  XMVECTOR XMVectorMultiply(FXMVECTOR V1, FXMVECTOR V2)
  {
    XMVECTORF32 Result = {{{V1.vector4_f32[0] * V2.vector4_f32[0],
                            V1.vector4_f32[1] * V2.vector4_f32[1],
                            V1.vector4_f32[2] * V2.vector4_f32[2],
                            V1.vector4_f32[3] * V2.vector4_f32[3]}}};

    return Result.v;
  }

  XMVECTOR XMLoadU565(const XMU565 *pSource)
  {
    XMVECTORF32 vResult = {{{
        float(pSource->v & 0x1F),
        float((pSource->v >> 5) & 0x3F),
        float((pSource->v >> 11) & 0x1F),
        0.f,
    }}};

    return vResult.v;
  }

  XMVECTOR XMVectorSwizzle(FXMVECTOR V, uint32_t E0, uint32_t E1, uint32_t E2, uint32_t E3)
  {
    XMVECTORF32 Result = {{{V.vector4_f32[E0],
                            V.vector4_f32[E1],
                            V.vector4_f32[E2],
                            V.vector4_f32[E3]}}};
    return Result.v;
  }

  // General swizzle template
  template <uint32_t SwizzleX, uint32_t SwizzleY, uint32_t SwizzleZ, uint32_t SwizzleW>
  XMVECTOR XMVectorSwizzle(FXMVECTOR V)
  {
    return XMVectorSwizzle(V, SwizzleX, SwizzleY, SwizzleZ, SwizzleW);
  }

  XMVECTOR XMVectorSelect(FXMVECTOR V1, FXMVECTOR V2, FXMVECTOR Control)
  {
    XMVECTORU32 Result = {{{
        (V1.vector4_u32[0] & ~Control.vector4_u32[0]) | (V2.vector4_u32[0] & Control.vector4_u32[0]),
        (V1.vector4_u32[1] & ~Control.vector4_u32[1]) | (V2.vector4_u32[1] & Control.vector4_u32[1]),
        (V1.vector4_u32[2] & ~Control.vector4_u32[2]) | (V2.vector4_u32[2] & Control.vector4_u32[2]),
        (V1.vector4_u32[3] & ~Control.vector4_u32[3]) | (V2.vector4_u32[3] & Control.vector4_u32[3]),
    }}};
    return Result.v;
  }

  XMVECTOR XMVectorReplicate(
      float Value)
  {
    XMVECTORF32 vResult;
    vResult.f[0] =
        vResult.f[1] =
            vResult.f[2] =
                vResult.f[3] = Value;
    return vResult.v;
  }

  XMVECTOR XMVectorSubtract(
      FXMVECTOR V1,
      FXMVECTOR V2)
  {
    XMVECTORF32 Result = {{{V1.vector4_f32[0] - V2.vector4_f32[0],
                            V1.vector4_f32[1] - V2.vector4_f32[1],
                            V1.vector4_f32[2] - V2.vector4_f32[2],
                            V1.vector4_f32[3] - V2.vector4_f32[3]}}};
    return Result.v;
  }

  XMVECTOR XMVectorMultiplyAdd(
      FXMVECTOR V1,
      FXMVECTOR V2,
      FXMVECTOR V3)
  {
    XMVECTORF32 Result = {{{V1.vector4_f32[0] * V2.vector4_f32[0] + V3.vector4_f32[0],
                            V1.vector4_f32[1] * V2.vector4_f32[1] + V3.vector4_f32[1],
                            V1.vector4_f32[2] * V2.vector4_f32[2] + V3.vector4_f32[2],
                            V1.vector4_f32[3] * V2.vector4_f32[3] + V3.vector4_f32[3]}}};
    return Result.v;
  }

  XMVECTOR XMVectorLerp(
      FXMVECTOR V0,
      FXMVECTOR V1,
      float t)
  {
    XMVECTOR Scale = XMVectorReplicate(t);
    XMVECTOR Length = XMVectorSubtract(V1, V0);
    return XMVectorMultiplyAdd(Length, Scale, V0);
  }

  XMVECTOR XMVectorZero()
  {
    XMVECTORF32 vResult = {{{0.0f, 0.0f, 0.0f, 0.0f}}};
    return vResult.v;
  }

  XMVECTOR XMVectorSetW(FXMVECTOR V, float w)
  {
    XMVECTORF32 U = {{{V.vector4_f32[0],
                       V.vector4_f32[1],
                       V.vector4_f32[2],
                       w}}};
    return U.v;
  }

  //-------------------------------------------------------------------------------------
  void OptimizeRGB(
      HDRColorA *pX,
      HDRColorA *pY,
      const HDRColorA *pPoints,
      uint32_t cSteps,
      uint32_t flags) noexcept
  {
    constexpr float fEpsilon = (0.25f / 64.0f) * (0.25f / 64.0f);
    static const float pC3[] = {2.0f / 2.0f, 1.0f / 2.0f, 0.0f / 2.0f};
    static const float pD3[] = {0.0f / 2.0f, 1.0f / 2.0f, 2.0f / 2.0f};
    static const float pC4[] = {3.0f / 3.0f, 2.0f / 3.0f, 1.0f / 3.0f, 0.0f / 3.0f};
    static const float pD4[] = {0.0f / 3.0f, 1.0f / 3.0f, 2.0f / 3.0f, 3.0f / 3.0f};

    const float *pC = (3 == cSteps) ? pC3 : pC4;
    const float *pD = (3 == cSteps) ? pD3 : pD4;

    // Find Min and Max points, as starting point
    HDRColorA X = (flags & BC_FLAGS_UNIFORM) ? HDRColorA(1.f, 1.f, 1.f, 1.f) : g_Luminance;
    HDRColorA Y = HDRColorA(0.0f, 0.0f, 0.0f, 1.0f);

    for (size_t iPoint = 0; iPoint < NUM_PIXELS_PER_BLOCK; iPoint++)
    {
      {
        if (pPoints[iPoint].r < X.r)
          X.r = pPoints[iPoint].r;

        if (pPoints[iPoint].g < X.g)
          X.g = pPoints[iPoint].g;

        if (pPoints[iPoint].b < X.b)
          X.b = pPoints[iPoint].b;

        if (pPoints[iPoint].r > Y.r)
          Y.r = pPoints[iPoint].r;

        if (pPoints[iPoint].g > Y.g)
          Y.g = pPoints[iPoint].g;

        if (pPoints[iPoint].b > Y.b)
          Y.b = pPoints[iPoint].b;
      }
    }

    // Diagonal axis
    const HDRColorA AB(Y.r - X.r, Y.g - X.g, Y.b - X.b, 0.0f);

    const float fAB = AB.r * AB.r + AB.g * AB.g + AB.b * AB.b;

    // Single color block.. no need to root-find
    if (fAB < FLT_MIN)
    {
      pX->r = X.r;
      pX->g = X.g;
      pX->b = X.b;
      pX->a = 1.0f;
      pY->r = Y.r;
      pY->g = Y.g;
      pY->b = Y.b;
      pY->a = 1.0f;
      return;
    }

    // Try all four axis directions, to determine which diagonal best fits data
    const float fABInv = 1.0f / fAB;

    HDRColorA Dir(AB.r * fABInv, AB.g * fABInv, AB.b * fABInv, 0.0f);

    const HDRColorA Mid(
        (X.r + Y.r) * 0.5f,
        (X.g + Y.g) * 0.5f,
        (X.b + Y.b) * 0.5f,
        0.0f);

    float fDir[4] = {};

    for (size_t iPoint = 0; iPoint < NUM_PIXELS_PER_BLOCK; iPoint++)
    {
      HDRColorA Pt;
      Pt.r = (pPoints[iPoint].r - Mid.r) * Dir.r;
      Pt.g = (pPoints[iPoint].g - Mid.g) * Dir.g;
      Pt.b = (pPoints[iPoint].b - Mid.b) * Dir.b;
      Pt.a = 0.0f;

      float f;

      f = Pt.r + Pt.g + Pt.b;
      fDir[0] += f * f;

      f = Pt.r + Pt.g - Pt.b;
      fDir[1] += f * f;

      f = Pt.r - Pt.g + Pt.b;
      fDir[2] += f * f;

      f = Pt.r - Pt.g - Pt.b;
      fDir[3] += f * f;
    }

    float fDirMax = fDir[0];
    size_t iDirMax = 0;

    for (size_t iDir = 1; iDir < 4; iDir++)
    {
      if (fDir[iDir] > fDirMax)
      {
        fDirMax = fDir[iDir];
        iDirMax = iDir;
      }
    }

    if (iDirMax & 2)
    {
      const float f = X.g;
      X.g = Y.g;
      Y.g = f;
    }

    if (iDirMax & 1)
    {
      const float f = X.b;
      X.b = Y.b;
      Y.b = f;
    }

    // Two color block.. no need to root-find
    if (fAB < 1.0f / 4096.0f)
    {
      pX->r = X.r;
      pX->g = X.g;
      pX->b = X.b;
      pX->a = 1.0f;
      pY->r = Y.r;
      pY->g = Y.g;
      pY->b = Y.b;
      pY->a = 1.0f;
      return;
    }

    // Use Newton's Method to find local minima of sum-of-squares error.
    auto const fSteps = static_cast<float>(cSteps - 1);

    for (size_t iIteration = 0; iIteration < 8; iIteration++)
    {
      // Calculate new steps
      HDRColorA pSteps[4];

      for (size_t iStep = 0; iStep < cSteps; iStep++)
      {
        pSteps[iStep].r = X.r * pC[iStep] + Y.r * pD[iStep];
        pSteps[iStep].g = X.g * pC[iStep] + Y.g * pD[iStep];
        pSteps[iStep].b = X.b * pC[iStep] + Y.b * pD[iStep];
        pSteps[iStep].a = 1.0f;
      }

      // Calculate color direction
      Dir.r = Y.r - X.r;
      Dir.g = Y.g - X.g;
      Dir.b = Y.b - X.b;

      const float fLen = (Dir.r * Dir.r + Dir.g * Dir.g + Dir.b * Dir.b);

      if (fLen < (1.0f / 4096.0f))
        break;

      const float fScale = fSteps / fLen;

      Dir.r *= fScale;
      Dir.g *= fScale;
      Dir.b *= fScale;

      // Evaluate function, and derivatives
      float d2X = 0.f;
      float d2Y = 0.f;
      HDRColorA dX = {};
      HDRColorA dY = {};

      for (size_t iPoint = 0; iPoint < NUM_PIXELS_PER_BLOCK; iPoint++)
      {
        const float fDot = (pPoints[iPoint].r - X.r) * Dir.r +
                           (pPoints[iPoint].g - X.g) * Dir.g +
                           (pPoints[iPoint].b - X.b) * Dir.b;

        uint32_t iStep;
        if (fDot <= 0.0f)
          iStep = 0;
        else if (fDot >= fSteps)
          iStep = cSteps - 1;
        else
          iStep = uint32_t(fDot + 0.5f);

        HDRColorA Diff;
        Diff.r = pSteps[iStep].r - pPoints[iPoint].r;
        Diff.g = pSteps[iStep].g - pPoints[iPoint].g;
        Diff.b = pSteps[iStep].b - pPoints[iPoint].b;
        Diff.a = 0.0f;

        const float fC = pC[iStep] * (1.0f / 8.0f);
        const float fD = pD[iStep] * (1.0f / 8.0f);

        d2X += fC * pC[iStep];
        dX.r += fC * Diff.r;
        dX.g += fC * Diff.g;
        dX.b += fC * Diff.b;

        d2Y += fD * pD[iStep];
        dY.r += fD * Diff.r;
        dY.g += fD * Diff.g;
        dY.b += fD * Diff.b;
      }

      // Move endpoints
      if (d2X > 0.0f)
      {
        const float f = -1.0f / d2X;

        X.r += dX.r * f;
        X.g += dX.g * f;
        X.b += dX.b * f;
      }

      if (d2Y > 0.0f)
      {
        const float f = -1.0f / d2Y;

        Y.r += dY.r * f;
        Y.g += dY.g * f;
        Y.b += dY.b * f;
      }

      if ((dX.r * dX.r < fEpsilon) && (dX.g * dX.g < fEpsilon) && (dX.b * dX.b < fEpsilon) &&
          (dY.r * dY.r < fEpsilon) && (dY.g * dY.g < fEpsilon) && (dY.b * dY.b < fEpsilon))
      {
        break;
      }
    }

    pX->r = X.r;
    pX->g = X.g;
    pX->b = X.b;
    pX->a = 1.0f;
    pY->r = Y.r;
    pY->g = Y.g;
    pY->b = Y.b;
    pY->a = 1.0f;
  }

  //-------------------------------------------------------------------------------------
  inline void DecodeBC1(
      XMVECTOR *pColor,
      const D3DX_BC1 *pBC,
      bool isbc1) noexcept
  {
    assert(pColor && pBC);
    static_assert(sizeof(D3DX_BC1) == 8, "D3DX_BC1 should be 8 bytes");

    static XMVECTORF32 s_Scale = {{{1.f / 31.f, 1.f / 63.f, 1.f / 31.f, 1.f}}};

    XMVECTOR clr0 = XMLoadU565(reinterpret_cast<const XMU565 *>(&pBC->rgb[0]));
    XMVECTOR clr1 = XMLoadU565(reinterpret_cast<const XMU565 *>(&pBC->rgb[1]));

    clr0 = XMVectorMultiply(clr0, s_Scale.v);
    clr1 = XMVectorMultiply(clr1, s_Scale.v);

    clr0 = XMVectorSwizzle<2, 1, 0, 3>(clr0);
    clr1 = XMVectorSwizzle<2, 1, 0, 3>(clr1);

    clr0 = XMVectorSelect(g_XMIdentityR3.v, clr0, g_XMSelect1110.v);
    clr1 = XMVectorSelect(g_XMIdentityR3.v, clr1, g_XMSelect1110.v);

    XMVECTOR clr2, clr3;
    if (isbc1 && (pBC->rgb[0] <= pBC->rgb[1]))
    {
      clr2 = XMVectorLerp(clr0, clr1, 0.5f);
      clr3 = XMVectorZero(); // Alpha of 0
    }
    else
    {
      clr2 = XMVectorLerp(clr0, clr1, 1.f / 3.f);
      clr3 = XMVectorLerp(clr0, clr1, 2.f / 3.f);
    }

    uint32_t dw = pBC->bitmap;

    for (size_t i = 0; i < NUM_PIXELS_PER_BLOCK; ++i, dw >>= 2)
    {
      switch (dw & 3)
      {
      case 0:
        pColor[i] = clr0;
        break;
      case 1:
        pColor[i] = clr1;
        break;
      case 2:
        pColor[i] = clr2;
        break;

      case 3:
      default:
        pColor[i] = clr3;
        break;
      }
    }
  }

  void D3DXDecodeBC1(XMVECTOR *pColor, const uint8_t *pBC) noexcept
  {
    auto pBC1 = reinterpret_cast<const D3DX_BC1 *>(pBC);
    DecodeBC1(pColor, pBC1, true);
  }

  void D3DXDecodeBC2(XMVECTOR *pColor, const uint8_t *pBC) noexcept
  {
    assert(pColor && pBC);
    static_assert(sizeof(D3DX_BC2) == 16, "D3DX_BC2 should be 16 bytes");

    auto pBC2 = reinterpret_cast<const D3DX_BC2 *>(pBC);

    // RGB part
    DecodeBC1(pColor, &pBC2->bc1, false);

    // 4-bit alpha part
    uint32_t dw = pBC2->bitmap[0];

    for (size_t i = 0; i < 8; ++i, dw >>= 4)
    {
  #pragma prefast(suppress : 22103, "writing blocks in two halves confuses tool")
      pColor[i] = XMVectorSetW(pColor[i], static_cast<float>(dw & 0xf) * (1.0f / 15.0f));
    }

    dw = pBC2->bitmap[1];

    for (size_t i = 8; i < NUM_PIXELS_PER_BLOCK; ++i, dw >>= 4)
      pColor[i] = XMVectorSetW(pColor[i], static_cast<float>(dw & 0xf) * (1.0f / 15.0f));
  }

  void D3DXDecodeBC3(XMVECTOR *pColor, const uint8_t *pBC) noexcept
  {
    assert(pColor && pBC);
    static_assert(sizeof(D3DX_BC3) == 16, "D3DX_BC3 should be 16 bytes");

    auto pBC3 = reinterpret_cast<const D3DX_BC3 *>(pBC);

    // RGB part
    DecodeBC1(pColor, &pBC3->bc1, false);

    // Adaptive 3-bit alpha part
    float fAlpha[8];

    fAlpha[0] = static_cast<float>(pBC3->alpha[0]) * (1.0f / 255.0f);
    fAlpha[1] = static_cast<float>(pBC3->alpha[1]) * (1.0f / 255.0f);

    if (pBC3->alpha[0] > pBC3->alpha[1])
    {
      for (size_t i = 1; i < 7; ++i)
        fAlpha[i + 1] = (fAlpha[0] * float(7u - i) + fAlpha[1] * float(i)) * (1.0f / 7.0f);
    }
    else
    {
      for (size_t i = 1; i < 5; ++i)
        fAlpha[i + 1] = (fAlpha[0] * float(5u - i) + fAlpha[1] * float(i)) * (1.0f / 5.0f);

      fAlpha[6] = 0.0f;
      fAlpha[7] = 1.0f;
    }

    uint32_t dw = uint32_t(pBC3->bitmap[0]) | uint32_t(pBC3->bitmap[1] << 8) | uint32_t(pBC3->bitmap[2] << 16);

    for (size_t i = 0; i < 8; ++i, dw >>= 3)
      pColor[i] = XMVectorSetW(pColor[i], fAlpha[dw & 0x7]);

    dw = uint32_t(pBC3->bitmap[3]) | uint32_t(pBC3->bitmap[4] << 8) | uint32_t(pBC3->bitmap[5] << 16);

    for (size_t i = 8; i < NUM_PIXELS_PER_BLOCK; ++i, dw >>= 3)
      pColor[i] = XMVectorSetW(pColor[i], fAlpha[dw & 0x7]);
  }
}
