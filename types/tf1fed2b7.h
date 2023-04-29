/**
 * Definition: tf1fed2b7
 * Hash: f1fed2b7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf1fed2b7 : public ComplexRead {
  DT_VECTOR4D q;
  DT_VECTOR4D p;
  DT_VECTOR4D s;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
