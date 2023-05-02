/**
 * Definition: t3dccd4aa
 * Hash: 3dccd4aa
 */

#include "t3dccd4aa.h"

void t3dccd4aa::read(const char* base, char* &ptr) {
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
  readData(&unk_4f25fc8, base, current);
  current = ptr + 0x4c;
  readData(&szSubObjectName, base, current);
  current = ptr + 0x50;
  readData(&flBlendTime, base, current);
  ptr += 0x58;
}
