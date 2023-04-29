/**
 * Definition: td9ea8458
 * Hash: d9ea8458
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td9ea8458 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
