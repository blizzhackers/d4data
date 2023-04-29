/**
 * Definition: QuestReward
 * Hash: c9e606d7
 */

#pragma once

#include "../types.h"
#include "te12242af.h"

#pragma push(pack, 1)

struct QuestReward : public ComplexRead {
  DT_SNO<SnoGroup::TreasureClass> snoTreasureClass;
  DT_INT nXPTier;
  DT_INT nGoldTier;
  DT_SNO<SnoGroup::TrackedReward> snoTrackedReward;
  DT_INT unk_b0fd814;
  te12242af unk_186d5e6;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Item>> unk_f8ed991;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
