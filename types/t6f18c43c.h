/**
 * Definition: t6f18c43c
 * Hash: 6f18c43c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6f18c43c : public ComplexRead {
  DT_CHARARRAY<64> szBoneName;
  DT_FLOAT flBlendWeight;
  DT_INT unk_3be99f4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
