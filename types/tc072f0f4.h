/**
 * Definition: tc072f0f4
 * Hash: c072f0f4
 */

#pragma once

#include "../types.h"
#include "t924ae201.h"
#include "tabf5cfe3.h"

#pragma push(pack, 1)

struct tc072f0f4 : public ComplexRead {
  DT_INT unk_370e8c2;
  DT_VARIABLEARRAY<t924ae201> unk_d1de32b;
  DT_SNO<SnoGroup::NpcComponentSet> snoNPCComponentSet;
  DT_VARIABLEARRAY<tabf5cfe3> unk_a9187cf;
  DT_INT unk_4c7112f;
  DT_ENUM<DT_INT> unk_1c56441;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
