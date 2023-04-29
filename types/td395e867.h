/**
 * Definition: td395e867
 * Hash: d395e867
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td395e867 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SNO<SnoGroup::World> snoWorld;
  DT_FIXEDARRAY<DT_SNO<SnoGroup::DungeonAffix>, 8> unk_9a2a829;
  DT_OPTIONAL<DT_INT> unk_845cf0b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
