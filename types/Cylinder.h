/**
 * Definition: Cylinder
 * Hash: 3b18a77a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Cylinder : public ComplexRead {
  DT_VECTOR3D wp1;
  DT_VECTOR3D wp2;
  DT_FLOAT flRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
