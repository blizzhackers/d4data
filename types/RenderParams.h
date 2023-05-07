/**
 * Definition: RenderParams
 * Hash: c7ce2084
 */

#pragma once

#include "../types.h"
#include "StencilParams.h"
#include "tcb3fe69d.h"

#pragma push(pack, 1)

struct RenderParams : public ComplexRead {
  DT_INT unk_e80141f;
  DT_ENUM<DT_INT> eCullMode;
  DT_INT fZBufferWriteEnable;
  DT_ENUM<DT_INT> eZBufferCompareFunc;
  DT_FLOAT flZBias;
  DT_FLOAT flZSlopeScaleBias;
  StencilParams tStencilParams;
  DT_INT fAlphaTestEnable;
  DT_ENUM<DT_INT> eAlphaTestCompareFunc;
  DT_BYTE bAlphaTestRefValue;
  DT_INT fAlphaMaskEnable;
  DT_ENUM<DT_INT> eFillMode;
  DT_INT unk_7e83826;
  DT_FIXEDARRAY<tcb3fe69d, 6> tAlphaBlend;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
