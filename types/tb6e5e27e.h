/**
 * Definition: tb6e5e27e
 * Hash: b6e5e27e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb6e5e27e : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
