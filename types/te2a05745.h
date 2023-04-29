/**
 * Definition: te2a05745
 * Hash: e2a05745
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te2a05745 : public ComplexRead {
  DT_INT unk_8700a4d;
  DT_INT unk_8700a4e;
  DT_UINT unk_d0410f9;
  DT_UINT unk_1d93eca;
  DT_VARIABLEARRAY<DT_VECTOR2D> unk_4555763;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
