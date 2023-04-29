/**
 * Definition: TriggerConditions
 * Hash: 34f409ce
 */

#include "TriggerConditions.h"

void TriggerConditions::read(const char* base, char* &ptr) {
  readData(&flChance, base, ptr);
  readData(&bMute, base, ptr);
  readData(&unk_1db3ba0, base, ptr);
  readData(&tDelay, base, ptr);
  readData(&unk_f0d960e, base, ptr);
  readData(&unk_1dcbf67, base, ptr);
  readData(&eMaterial, base, ptr);
  readData(&dwConditionFlags, base, ptr);
  readData(&unk_817e082, base, ptr);
}
