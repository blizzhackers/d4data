/**
 * Definition: tb0516ff4
 * Hash: b0516ff4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb0516ff4 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
