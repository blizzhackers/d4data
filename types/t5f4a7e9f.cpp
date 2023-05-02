/**
 * Definition: t5f4a7e9f
 * Hash: 5f4a7e9f
 */

#include "t5f4a7e9f.h"

void t5f4a7e9f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
