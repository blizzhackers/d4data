/**
 * Definition: DungeonAffixDefinition
 * Hash: 4859c8e7
 */

#pragma once

#include "../types.h"
#include "DungeonAffixRange.h"

#pragma push(pack, 1)

struct DungeonAffixDefinition : public ComplexRead {
  DT_INT nWeight;
  DT_ENUM<DT_INT> unk_40a4411;
  DT_INT unk_6e1d9b8;
  DT_GBID<0x1e> gbidAffixFamily;
  DT_VARIABLEARRAY<DungeonAffixRange> unk_7f8b6b7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
