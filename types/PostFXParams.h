/**
 * Definition: PostFXParams
 * Hash: 8a1f6d28
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PostFXParams : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 4> flFilterOffset;
  DT_FIXEDARRAY<DT_FLOAT, 4> flFilterCoeff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
