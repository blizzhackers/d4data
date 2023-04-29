/**
 * Definition: ScaleKey
 * Hash: 483cedd1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScaleKey : public ComplexRead {
  DT_INT nFrame;
  DT_VECTOR3D vScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
