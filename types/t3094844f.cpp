/**
 * Definition: t3094844f
 * Hash: 3094844f
 */

#include "t3094844f.h"

void t3094844f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&grid, base, current);
  current = ptr + 0x10;
  readData(&arPrimitives, base, current);
  current = ptr + 0x20;
  readData(&aabbBounds, base, current);
  current = ptr + 0x38;
  readData(&dwRows, base, current);
  current = ptr + 0x3c;
  readData(&dwColumns, base, current);
  ptr += 0x40;
}
