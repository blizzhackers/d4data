/**
 * Definition: t8dc7baa3
 * Hash: 8dc7baa3
 */

#include "t8dc7baa3.h"

void t8dc7baa3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
