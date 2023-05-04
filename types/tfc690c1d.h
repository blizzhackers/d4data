/**
 * Definition: tfc690c1d
 * Hash: fc690c1d
 */

#pragma once

#include "../types.h"
#include "DungeonStatesEntry.h"

#pragma push(pack, 1)

struct tfc690c1d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<DungeonStatesEntry> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
