/**
 * Definition: tfff40bd8
 * Hash: fff40bd8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfff40bd8 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
