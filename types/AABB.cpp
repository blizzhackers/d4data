/**
 * Definition: AABB
 * Hash: 24c1e6
 */

#include "AABB.h"

void AABB::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp, base, current);
  current = ptr + 0xc;
  readData(&wvExt, base, current);
  ptr += 0x18;
}
