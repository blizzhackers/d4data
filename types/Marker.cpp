/**
 * Definition: Marker
 * Hash: bab8d922
 */

#include "Marker.h"

void Marker::read(const char* base, char* &ptr) {
  readData(&dwHash, base, ptr);
  readData(&nID, base, ptr);
  readData(&eType, base, ptr);
  readData(&transform, base, ptr);
  readData(&snoname, base, ptr);
  readData(&unk_3e7936a, base, ptr);
  readData(&vecScale, base, ptr);
  readData(&ptBase, base, ptr);
  readData(&unk_aaaca4b, base, ptr);
  readData(&ptMarkerLinks, base, ptr);
  readData(&unk_c339f69, base, ptr);
  readData(&dwSeed, base, ptr);
  readData(&unk_bbfbbfe, base, ptr);
}
