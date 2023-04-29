/**
 * Definition: tb1d65a81
 * Hash: b1d65a81
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb1d65a81 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
