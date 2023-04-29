/**
 * Definition: BountyData
 * Hash: b195c35b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BountyData : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_SNO<SnoGroup::WorldState> snoWorldState;
  DT_INT nValue;
  DT_ENUM<DT_INT> eBountyType;
  DT_SNO<SnoGroup::SubZone> unk_6199257;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
