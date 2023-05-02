/**
 * Definition: t5dcb1af1
 * Hash: 5dcb1af1
 */

#include "t5dcb1af1.h"

void t5dcb1af1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_33d39d0, base, current);
  ptr += 0x20;
}
