/**
 * Definition: BlizzconSubcondition
 * Hash: 823d7a5c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BlizzconSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
