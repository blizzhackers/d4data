/**
 * Definition: AchievementDefinition
 * Hash: c9595672
 */

#include "AchievementDefinition.h"

void AchievementDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&uPointsValue, base, current);
  current = ptr + 0xc;
  readData(&dwNextID, base, current);
  current = ptr + 0x10;
  readData(&uMinRequiredCriteria, base, current);
  current = ptr + 0x14;
  readData(&snoSupersedes, base, current);
  current = ptr + 0x18;
  readData(&uFlags, base, current);
  current = ptr + 0x1c;
  readData(&unk_aa46967, base, current);
  current = ptr + 0x20;
  readData(&unk_8b76c22, base, current);
  current = ptr + 0x30;
  readData(&arRewardList, base, current);
  current = ptr + 0x40;
  readData(&unk_da26abf, base, current);
  current = ptr + 0x58;
  readData(&unk_9c99920, base, current);
  current = ptr + 0x70;
  readData(&unk_17fe2c9, base, current);
  current = ptr + 0x88;
  readData(&hImage, base, current);
  ptr += 0x90;
}
