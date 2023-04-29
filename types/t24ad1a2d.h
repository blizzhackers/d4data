/**
 * Definition: t24ad1a2d
 * Hash: 24ad1a2d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t24ad1a2d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Actor> snoActorMonster;
  DT_ENUM<DT_INT> eMonsterRarity;
  DT_INT unk_6e0a930;
  DT_FIXEDARRAY<DT_GBID<0x7>, 2> pRareNameGBIDs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
