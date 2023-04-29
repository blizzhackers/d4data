/**
 * Definition: OBB
 * Hash: 158d3
 */

#include "OBB.h"

void OBB::read(const char* base, char* &ptr) {
  readData(&transform, base, ptr);
  readData(&wvExt, base, ptr);
}
