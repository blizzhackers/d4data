/**
 * Definition: MarkerHandle
 * Hash: ea806a2e
 */

#include "MarkerHandle.h"

void MarkerHandle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMarkerSet, base, current);
  current = ptr + 0x4;
  readData(&nID, base, current);
  ptr += 0x8;
}
