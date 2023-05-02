/**
 * Definition: MarkerLink
 * Hash: b0101430
 */

#include "MarkerLink.h"

void MarkerLink::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nMarkerID, base, current);
  current = ptr + 0x4;
  readData(&dwGroupHash, base, current);
  current = ptr + 0x8;
  readData(&nMarkerIndex, base, current);
  ptr += 0xc;
}
