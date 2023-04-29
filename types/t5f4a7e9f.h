/**
 * Definition: t5f4a7e9f
 * Hash: 5f4a7e9f
 */

#pragma once

#include "../types.h"
#include "RareMonsterNamesEntry.h"

#pragma push(pack, 1)

struct t5f4a7e9f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<RareMonsterNamesEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
