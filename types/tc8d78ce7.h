/**
 * Definition: tc8d78ce7
 * Hash: c8d78ce7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc8d78ce7 : public ComplexRead {
  DT_INT nWidth;
  DT_INT nHeight;
  DT_INT nDepth;
  DT_UINT dwPitch;
  DT_UINT dwSlicePitch;
  DT_FLOAT flGridSize;
  DT_VECTOR3D wpOrigin;
  DT_INT64 unk_4b236f4;
  DT_VARIABLEARRAY<DT_WORD> unk_aa0958e;
  DT_VARIABLEARRAY<DT_WORD> unk_aa09583;
  DT_VARIABLEARRAY<DT_WORD> unk_aa0957e;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf4b;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf40;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf3b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
