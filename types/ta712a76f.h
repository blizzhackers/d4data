/**
 * Definition: ta712a76f
 * Hash: a712a76f
 */

#pragma once

#include "../types.h"
#include "KeyedDungeonTierEntry.h"

#pragma push(pack, 1)

struct ta712a76f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<KeyedDungeonTierEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
