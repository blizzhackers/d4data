/**
 * Definition: t65cf645d
 * Hash: 65cf645d
 */

#include "t65cf645d.h"

void t65cf645d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&grid, base, current);
  current = ptr + 0x10;
  readData(&aabbBounds, base, current);
  current = ptr + 0x28;
  readData(&dwRows, base, current);
  current = ptr + 0x2c;
  readData(&dwColumns, base, current);
  ptr += 0x30;
}
