/**
 * Definition: te27b5b4a
 * Hash: e27b5b4a
 */

#pragma once

#include "../types.h"
#include "AABB.h"

#pragma push(pack, 1)

struct te27b5b4a : public ComplexRead {
  DT_ENUM<DT_INT> unk_c3535ed;
  DT_VARIABLEARRAY<DT_VECTOR3D> unk_2195b98;
  DT_VARIABLEARRAY<DT_INT> unk_c70bbe2;
  DT_VARIABLEARRAY<DT_INT> unk_b833e44;
  DT_VARIABLEARRAY<DT_FLOAT> unk_a61b0d;
  DT_FLOAT flLength;
  DT_INT unk_e49607c;
  AABB aabbBounds;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
