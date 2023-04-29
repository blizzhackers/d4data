/**
 * Definition: t586d03a
 * Hash: 586d03a
 */

#include "t586d03a.h"

void t586d03a::read(const char* base, char* &ptr) {
  readData(&unk_73fba37, base, ptr);
  readData(&snoMarker, base, ptr);
  readData(&nMarkerIndex, base, ptr);
}
