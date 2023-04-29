/**
 * Definition: QuestReward
 * Hash: c9e606d7
 */

#include "QuestReward.h"

void QuestReward::read(const char* base, char* &ptr) {
  readData(&snoTreasureClass, base, ptr);
  readData(&nXPTier, base, ptr);
  readData(&nGoldTier, base, ptr);
  readData(&snoTrackedReward, base, ptr);
  readData(&unk_b0fd814, base, ptr);
  readData(&unk_186d5e6, base, ptr);
  readData(&unk_f8ed991, base, ptr);
}
