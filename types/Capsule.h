/**
 * Definition: Capsule
 * Hash: fee138d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Capsule : public ComplexRead {
  DT_VECTOR3D wp1;
  DT_VECTOR3D wp2;
  DT_FLOAT flRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
