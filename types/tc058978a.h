/**
 * Definition: tc058978a
 * Hash: c058978a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc058978a : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
