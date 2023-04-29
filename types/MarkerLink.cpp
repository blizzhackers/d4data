/**
 * Definition: MarkerLink
 * Hash: b0101430
 */

#include "MarkerLink.h"

void MarkerLink::read(const char* base, char* &ptr) {
  readData(&nMarkerID, base, ptr);
  readData(&dwGroupHash, base, ptr);
  readData(&nMarkerIndex, base, ptr);
}
