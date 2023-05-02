/**
 * Definition: t5d4bac71
 * Hash: 5d4bac71
 */

#include "t5d4bac71.h"

void t5d4bac71::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
