/**
 * Definition: TriggerEventFootstep
 * Hash: 4f31e0ca
 */

#include "TriggerEventFootstep.h"

void TriggerEventFootstep::read(const char* base, char* &ptr) {
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
  readData(&tHardpointLink, base, current);
  current = ptr + 0x50;
  readData(&eFootstepType, base, current);
  current = ptr + 0x54;
  readData(&unk_5de393e, base, current);
  current = ptr + 0x58;
  readData(&unk_a32d8d5, base, current);
  current = ptr + 0x5c;
  readData(&unk_522f94d, base, current);
  ptr += 0x60;
}
