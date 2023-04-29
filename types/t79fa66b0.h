/**
 * Definition: t79fa66b0
 * Hash: 79fa66b0
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "t7a482be4.h"
#include "tcd5b4347.h"

#pragma push(pack, 1)

struct t79fa66b0 : public ComplexRead {
  DT_VARIABLEARRAY<t7a482be4> unk_eaeca19;
  tcd5b4347 unk_7934bc2;
  DT_INT unk_2f217b0;
  AABB aabbBounds;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
