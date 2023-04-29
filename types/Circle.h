/**
 * Definition: Circle
 * Hash: a3f5e5b2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Circle : public ComplexRead {
  DT_VECTOR2D wpCenter;
  DT_FLOAT wdRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
