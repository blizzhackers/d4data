/**
 * Definition: t1aa249c9
 * Hash: 1aa249c9
 */

#include "t1aa249c9.h"

void t1aa249c9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&wpLocation, base, current);
  current = ptr + 0x1c;
  readData(&dwEnd, base, current);
  current = ptr + 0x20;
  readData(&snoLevelArea, base, current);
  ptr += 0x24;
}
