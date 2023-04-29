/**
 * Definition: ta50877b0
 * Hash: a50877b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta50877b0 : public ComplexRead {
  DT_ENUM<DT_INT> eRewardType;
  DT_SNO<SnoGroup::Item> snoItemReward;
  DT_SNO<SnoGroup::TrackedReward> snoTrackedReward;
  DT_INT nGoldTier;
  DT_INT unk_a451150;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
