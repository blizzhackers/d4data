/**
 * Definition: t77e24bbd
 * Hash: 77e24bbd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t77e24bbd : public ComplexRead {
  DT_INT tValueMin;
  DT_INT tValueMax;
  DT_FLOAT tTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
