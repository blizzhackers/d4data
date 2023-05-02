/**
 * Definition: tfc690c1d
 * Hash: fc690c1d
 */

#include "tfc690c1d.h"

void tfc690c1d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
