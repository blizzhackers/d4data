/**
 * Definition: tc04236f5
 * Hash: c04236f5
 */

#pragma once

#include "../types.h"
#include "t6a7c9e6e.h"

#pragma push(pack, 1)

struct tc04236f5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<t6a7c9e6e> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
