/**
 * Definition: t8a6fda3f
 * Hash: 8a6fda3f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8a6fda3f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
