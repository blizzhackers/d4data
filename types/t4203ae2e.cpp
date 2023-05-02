/**
 * Definition: t4203ae2e
 * Hash: 4203ae2e
 */

#include "t4203ae2e.h"

void t4203ae2e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&snoMarkerSet, base, current);
  ptr += 0x8;
}
