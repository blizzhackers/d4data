/**
 * Definition: t30f4b788
 * Hash: 30f4b788
 */

#include "t30f4b788.h"

void t30f4b788::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tEntries, base, current);
  ptr += 0x20;
}
