/**
 * Definition: VictimMessage
 * Hash: 9fb35fd1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct VictimMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_7dbf108;
  DT_INT nKillerLevel;
  DT_UINT unk_e37feff;
  DT_ENUM<DT_INT> eKillerMonsterRarity;
  DT_SNO<SnoGroup::Actor> snoKillerActor;
  DT_INT unk_6e0a930;
  DT_ENUM<DT_INT> eKillerTeam;
  DT_FIXEDARRAY<DT_GBID<0x7>, 2> pKillerRareNameGBIDs;
  DT_SNO<SnoGroup::Power> snoPowerDmgSource;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
