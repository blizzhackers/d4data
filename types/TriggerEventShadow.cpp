/**
 * Definition: TriggerEventShadow
 * Hash: 1e576cdc
 */

#include "TriggerEventShadow.h"

void TriggerEventShadow::read(const char* base, char* &ptr) {
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
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x4c;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x50;
  readData(&bShadow, base, current);
  ptr += 0x58;
}
