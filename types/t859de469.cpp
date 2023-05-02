/**
 * Definition: t859de469
 * Hash: 859de469
 */

#include "t859de469.h"

void t859de469::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x8;
  readData(&arSegments, base, current);
  current = ptr + 0x18;
  readData(&aabbBounds, base, current);
  current = ptr + 0x30;
  readData(&dwRows, base, current);
  current = ptr + 0x34;
  readData(&dwColumns, base, current);
  current = ptr + 0x38;
  readData(&arGrid, base, current);
  ptr += 0x48;
}
