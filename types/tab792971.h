/**
 * Definition: tab792971
 * Hash: ab792971
 */

#pragma once

#include "../types.h"
#include "ItemSalvageLevel.h"

#pragma push(pack, 1)

struct tab792971 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ItemSalvageLevel> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
