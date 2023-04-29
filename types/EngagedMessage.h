/**
 * Definition: EngagedMessage
 * Hash: 47800870
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct EngagedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Actor> snoActorMonster;
  DT_ENUM<DT_INT> eMonsterRarity;
  DT_INT unk_6e0a930;
  DT_FIXEDARRAY<DT_GBID<0x7>, 2> pRareNameGBIDs;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::MonsterAffix>, 4> snoMonsterAffixes;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
