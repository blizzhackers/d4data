/**
 * Definition: t63010144
 * Hash: 63010144
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t63010144 : public ComplexRead {
  DT_VECTOR4D tValueMin;
  DT_VECTOR4D tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
