/**
 * Definition: Sphere
 * Hash: c9c1a8c7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Sphere : public ComplexRead {
  DT_VECTOR3D wpCenter;
  DT_FLOAT wdRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
