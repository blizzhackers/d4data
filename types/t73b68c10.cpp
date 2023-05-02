/**
 * Definition: t73b68c10
 * Hash: 73b68c10
 */

#include "t73b68c10.h"

void t73b68c10::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
