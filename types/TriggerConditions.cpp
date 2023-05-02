/**
 * Definition: TriggerConditions
 * Hash: 34f409ce
 */

#include "TriggerConditions.h"

void TriggerConditions::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flChance, base, current);
  current = ptr + 0x4;
  readData(&bMute, base, current);
  current = ptr + 0x8;
  readData(&unk_1db3ba0, base, current);
  current = ptr + 0xc;
  readData(&tDelay, base, current);
  current = ptr + 0x10;
  readData(&unk_f0d960e, base, current);
  current = ptr + 0x18;
  readData(&unk_1dcbf67, base, current);
  current = ptr + 0x20;
  readData(&eMaterial, base, current);
  current = ptr + 0x24;
  readData(&dwConditionFlags, base, current);
  current = ptr + 0x28;
  readData(&unk_817e082, base, current);
  ptr += 0x2c;
}
