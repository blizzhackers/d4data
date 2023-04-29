/**
 * Definition: ta50877b0
 * Hash: a50877b0
 */

#include "ta50877b0.h"

void ta50877b0::read(const char* base, char* &ptr) {
  readData(&eRewardType, base, ptr);
  readData(&snoItemReward, base, ptr);
  readData(&snoTrackedReward, base, ptr);
  readData(&nGoldTier, base, ptr);
  readData(&unk_a451150, base, ptr);
}
