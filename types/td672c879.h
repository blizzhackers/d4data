/**
 * Definition: td672c879
 * Hash: d672c879
 */

#pragma once

#include "../types.h"
#include "HiddenCacheEntry.h"

#pragma push(pack, 1)

struct td672c879 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<HiddenCacheEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
