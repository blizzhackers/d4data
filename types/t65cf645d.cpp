/**
 * Definition: t65cf645d
 * Hash: 65cf645d
 */

#include "t65cf645d.h"

void t65cf645d::read(const char* base, char* &ptr) {
  readData(&grid, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&dwRows, base, ptr);
  readData(&dwColumns, base, ptr);
}
