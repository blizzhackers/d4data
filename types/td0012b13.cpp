/**
 * Definition: td0012b13
 * Hash: d0012b13
 */

#include "td0012b13.h"

void td0012b13::read(const char* base, char* &ptr) {
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
  readData(&unk_70ccb7e, base, current);
  current = ptr + 0x4c;
  readData(&unk_f294e79, base, current);
  current = ptr + 0x58;
  readData(&arKeys, base, current);
  current = ptr + 0x70;
  readData(&unk_9717a7e, base, current);
  ptr += 0x78;
}
