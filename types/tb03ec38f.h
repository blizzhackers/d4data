/**
 * Definition: tb03ec38f
 * Hash: b03ec38f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb03ec38f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
