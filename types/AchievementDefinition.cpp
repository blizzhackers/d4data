/**
 * Definition: AchievementDefinition
 * Hash: c9595672
 */

#include "AchievementDefinition.h"

void AchievementDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&uPointsValue, base, ptr);
  readData(&dwNextID, base, ptr);
  readData(&uMinRequiredCriteria, base, ptr);
  readData(&unk_d8ffc53, base, ptr);
  readData(&uFlags, base, ptr);
  readData(&unk_aa46967, base, ptr);
  readData(&unk_8b76c22, base, ptr);
  readData(&unk_e8e4934, base, ptr);
  readData(&unk_da26abf, base, ptr);
  readData(&unk_9c99920, base, ptr);
  readData(&unk_17fe2c9, base, ptr);
  readData(&hImage, base, ptr);
}
