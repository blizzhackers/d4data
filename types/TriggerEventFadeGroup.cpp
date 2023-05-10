/**
 * Definition: TriggerEventFadeGroup
 * Hash: d4f934b3
 */

#include "TriggerEventFadeGroup.h"

void TriggerEventFadeGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&unk_8dea4d9, base, current);
  current = ptr + 0x4c;
  readData(&nFadeGroup, base, current);
  current = ptr + 0x50;
  readData(&eBehavior, base, current);
  current = ptr + 0x54;
  readData(&unk_2b48a58, base, current);
  ptr += 0x58;
}
