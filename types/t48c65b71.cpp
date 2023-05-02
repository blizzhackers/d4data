/**
 * Definition: t48c65b71
 * Hash: 48c65b71
 */

#include "t48c65b71.h"

void t48c65b71::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
