/**
 * Definition: Rect2D
 * Hash: c6a2ec24
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Rect2D : public ComplexRead {
  DT_FLOAT left;
  DT_FLOAT top;
  DT_FLOAT right;
  DT_FLOAT bottom;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
