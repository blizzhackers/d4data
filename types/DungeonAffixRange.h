/**
 * Definition: DungeonAffixRange
 * Hash: b09c636b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct DungeonAffixRange : public ComplexRead {
  DT_RANGE<DT_INT> unk_3482315;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
