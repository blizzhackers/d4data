/**
 * Definition: t835b496b
 * Hash: 835b496b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t835b496b : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
