/**
 * Definition: AABB
 * Hash: 24c1e6
 */

#include "AABB.h"

void AABB::read(const char* base, char* &ptr) {
  readData(&wp, base, ptr);
  readData(&wvExt, base, ptr);
}
