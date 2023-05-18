/**
 * Definition: ScreenStaticCamps
 * Hash: 85c1513c
 */

#include "ScreenStaticCamps.h"

void ScreenStaticCamps::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoTerritory, base, current);
  current = ptr + 0x8;
  readData(&arPoints, base, current);
  ptr += 0x18;
}
