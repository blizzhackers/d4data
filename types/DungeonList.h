/**
 * Definition: DungeonList
 * Hash: cb02466c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DungeonList : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::World>> arDungeons;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
