/**
 * Definition: AABB
 * Hash: 24c1e6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AABB : public ComplexRead {
  DT_VECTOR3D wp;
  DT_VECTOR3D wvExt;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
