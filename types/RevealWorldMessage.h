/**
 * Definition: RevealWorldMessage
 * Hash: fa3a85cc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct RevealWorldMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_UINT unk_2573139;
  DT_OPTIONAL<DT_INT> unk_b4055da;
  DT_OPTIONAL<DT_INT> uKeyedDungeonTier;
  DT_FIXEDARRAY<DT_GBID<0x1f>, 32> arDungeonStates;
  DT_INT unk_fc9049b;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::DungeonAffix>, 8> unk_9a2a829;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Quest>, 8> unk_6966598;
  DT_INT unk_b020582;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
