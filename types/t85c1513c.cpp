/**
 * Definition: t85c1513c
 * Hash: 85c1513c
 */

#include "t85c1513c.h"

void t85c1513c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoTerritory, base, current);
  current = ptr + 0x8;
  readData(&arPoints, base, current);
  ptr += 0x18;
}
