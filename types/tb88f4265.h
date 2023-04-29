/**
 * Definition: tb88f4265
 * Hash: b88f4265
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb88f4265 : public ComplexRead {
  DT_VECTOR4D rx;
  DT_VECTOR4D ry;
  DT_VECTOR4D rz;
  DT_VECTOR4D p;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
