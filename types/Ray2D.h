/**
 * Definition: Ray2D
 * Hash: 6031382
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Ray2D : public ComplexRead {
  DT_VECTOR2D wpOrigin;
  DT_VECTOR2D wvDirection;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
