/**
 * Definition: DungeonStatesEntry
 * Hash: d214b596
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct DungeonStatesEntry : public ComplexRead {
  GBIDHeader tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
