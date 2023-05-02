/**
 * Definition: t74c296ab
 * Hash: 74c296ab
 */

#include "t74c296ab.h"

void t74c296ab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
