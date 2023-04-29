/**
 * Definition: t859de469
 * Hash: 859de469
 */

#include "t859de469.h"

void t859de469::read(const char* base, char* &ptr) {
  readData(&snoWorld, base, ptr);
  readData(&arSegments, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&dwRows, base, ptr);
  readData(&dwColumns, base, ptr);
  readData(&arGrid, base, ptr);
}
