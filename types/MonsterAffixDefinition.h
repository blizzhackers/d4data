/**
 * Definition: MonsterAffixDefinition
 * Hash: 1bf517ff
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MonsterAffixDefinition : public ComplexRead {
  DT_INT bShown;
  DT_SNO<SnoGroup::Power> snoOnDeathPower;
  DT_SNO<SnoGroup::Power> snoSpawnPower;
  DT_UINT hIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
