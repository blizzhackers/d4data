/**
 * Definition: t76fbf09b
 * Hash: 76fbf09b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t76fbf09b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_INT bIsWorldEvent;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_SNO<SnoGroup::Item> snoReward;
  DT_ENUM<DT_INT> eRewardQuality;
  DT_INT64 unk_576b41d;
  DT_VECTOR3D wpLocation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
