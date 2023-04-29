/**
 * Definition: t63010143
 * Hash: 63010143
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t63010143 : public ComplexRead {
  DT_VECTOR3D tValueMin;
  DT_VECTOR3D tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
