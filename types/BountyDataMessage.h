/**
 * Definition: BountyDataMessage
 * Hash: b3c21860
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct BountyDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Quest> snoBounty;
  DT_SNO<SnoGroup::Item> snoRewardItem;
  DT_INT64 dwEndTime;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
