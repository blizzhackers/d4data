/**
 * Definition: QuestReward
 * Hash: c9e606d7
 */

#include "QuestReward.h"

void QuestReward::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoTreasureClass, base, current);
  current = ptr + 0x4;
  readData(&nXPTier, base, current);
  current = ptr + 0x8;
  readData(&nGoldTier, base, current);
  current = ptr + 0xc;
  readData(&snoTrackedReward, base, current);
  current = ptr + 0x10;
  readData(&unk_b0fd814, base, current);
  current = ptr + 0x14;
  readData(&unk_186d5e6, base, current);
  current = ptr + 0x18;
  readData(&unk_f8ed991, base, current);
  ptr += 0x28;
}
