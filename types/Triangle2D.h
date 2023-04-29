/**
 * Definition: Triangle2D
 * Hash: 4ccf850c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Triangle2D : public ComplexRead {
  DT_VECTOR2D wp0;
  DT_VECTOR2D wp1;
  DT_VECTOR2D wp2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
