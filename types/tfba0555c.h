/**
 * Definition: tfba0555c
 * Hash: fba0555c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfba0555c : public ComplexRead {
  DT_VECTOR3D normal;
  DT_FLOAT offset;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
