/**
 * Definition: ta50877b0
 * Hash: a50877b0
 */

#include "ta50877b0.h"

void ta50877b0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eRewardType, base, current);
  current = ptr + 0x4;
  readData(&snoItemReward, base, current);
  current = ptr + 0x8;
  readData(&snoTrackedReward, base, current);
  current = ptr + 0xc;
  readData(&nGoldTier, base, current);
  current = ptr + 0x10;
  readData(&unk_a451150, base, current);
  ptr += 0x14;
}
