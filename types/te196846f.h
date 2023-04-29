/**
 * Definition: te196846f
 * Hash: e196846f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te196846f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
