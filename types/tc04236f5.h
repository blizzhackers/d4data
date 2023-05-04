/**
 * Definition: tc04236f5
 * Hash: c04236f5
 */

#pragma once

#include "../types.h"
#include "CraftingMatCategory.h"

#pragma push(pack, 1)

struct tc04236f5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<CraftingMatCategory> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
