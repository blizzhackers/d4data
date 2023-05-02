/**
 * Definition: t8b825ea8
 * Hash: 8b825ea8
 */

#include "t8b825ea8.h"

void t8b825ea8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
