/**
 * Definition: Triangle3D
 * Hash: 4ccf852d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Triangle3D : public ComplexRead {
  DT_VECTOR3D wp0;
  DT_VECTOR3D wp1;
  DT_VECTOR3D wp2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
