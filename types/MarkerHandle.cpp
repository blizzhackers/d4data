/**
 * Definition: MarkerHandle
 * Hash: ea806a2e
 */

#include "MarkerHandle.h"

void MarkerHandle::read(const char* base, char* &ptr) {
  readData(&snoMarkerSet, base, ptr);
  readData(&nID, base, ptr);
}
