/**
 * Definition: Plane
 * Hash: 5e48c70
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Plane : public ComplexRead {
  DT_VECTOR3D wvNormal;
  DT_FLOAT wdD;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
