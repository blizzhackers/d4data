/**
 * Definition: OctreeCube
 * Hash: 93896f01
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct OctreeCube : public ComplexRead {
  DT_VECTOR3D wpOrigin;
  DT_FLOAT wdSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
