/**
 * Definition: IRect2D
 * Hash: b9fe3f2d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct IRect2D : public ComplexRead {
  DT_INT left;
  DT_INT top;
  DT_INT right;
  DT_INT bottom;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
