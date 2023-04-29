/**
 * Definition: Ray3D
 * Hash: 60313a3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Ray3D : public ComplexRead {
  DT_VECTOR3D wpOrigin;
  DT_VECTOR3D wvDirection;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
