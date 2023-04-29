/**
 * Definition: tad4d33a9
 * Hash: ad4d33a9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tad4d33a9 : public ComplexRead {
  DT_INT nWidth;
  DT_INT nHeight;
  DT_INT nDepth;
  DT_FLOAT unk_a952693;
  DT_VECTOR3D wpOrigin;
  DT_VARIABLEARRAY<DT_WORD> unk_aa0958e;
  DT_VARIABLEARRAY<DT_WORD> unk_aa09583;
  DT_VARIABLEARRAY<DT_WORD> unk_aa0957e;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf4b;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf40;
  DT_VARIABLEARRAY<DT_WORD> unk_dd3cf3b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
