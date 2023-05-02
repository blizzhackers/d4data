/**
 * Definition: t5202b239
 * Hash: 5202b239
 */

#include "t5202b239.h"

void t5202b239::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  ptr += 0x30;
}
