/**
 * Definition: OBB
 * Hash: 158d3
 */

#include "OBB.h"

void OBB::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&transform, base, current);
  current = ptr + 0x1c;
  readData(&wvExt, base, current);
  ptr += 0x28;
}
