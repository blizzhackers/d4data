/**
 * Definition: t6ce94c9b
 * Hash: 6ce94c9b
 */

#include "t6ce94c9b.h"

void t6ce94c9b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
