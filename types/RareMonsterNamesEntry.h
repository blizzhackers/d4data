/**
 * Definition: RareMonsterNamesEntry
 * Hash: 4efaee98
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct RareMonsterNamesEntry : public ComplexRead {
  GBIDHeader tHeader;
  DT_INT fPrefix;
  DT_SNO<SnoGroup::MonsterAffix> snoAffixEffect;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::MonsterFamily>> unk_4a1da9e;
  DT_ENUM<DT_INT> unk_47bc829;
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_INT unk_340ed93;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
