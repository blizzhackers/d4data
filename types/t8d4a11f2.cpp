/**
 * Definition: t8d4a11f2
 * Hash: 8d4a11f2
 */

#include "t8d4a11f2.h"

void t8d4a11f2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
