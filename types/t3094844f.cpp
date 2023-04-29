/**
 * Definition: t3094844f
 * Hash: 3094844f
 */

#include "t3094844f.h"

void t3094844f::read(const char* base, char* &ptr) {
  readData(&grid, base, ptr);
  readData(&arPrimitives, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&dwRows, base, ptr);
  readData(&dwColumns, base, ptr);
}
