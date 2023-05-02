/**
 * Definition: t4cc930af
 * Hash: 4cc930af
 */

#include "t4cc930af.h"

void t4cc930af::read(const char* base, char* &ptr) {
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
  readData(&tConstraintLink, base, current);
  current = ptr + 0x4c;
  readData(&tHardpointLink, base, current);
  ptr += 0x58;
}
