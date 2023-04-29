/**
 * Definition: Line3D
 * Hash: b8f222df
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Line3D : public ComplexRead {
  DT_VECTOR3D wp;
  DT_VECTOR3D wv;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
