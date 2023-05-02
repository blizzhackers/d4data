/**
 * Definition: t586d03a
 * Hash: 586d03a
 */

#include "t586d03a.h"

void t586d03a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_73fba37, base, current);
  current = ptr + 0x4;
  readData(&snoMarker, base, current);
  current = ptr + 0x8;
  readData(&nMarkerIndex, base, current);
  ptr += 0xc;
}
