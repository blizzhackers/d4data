/**
 * Definition: ta33c7df4
 * Hash: a33c7df4
 */

#include "ta33c7df4.h"

void ta33c7df4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoGlyph, base, current);
  current = ptr + 0x14;
  readData(&dwNodeIndex, base, current);
  ptr += 0x18;
}
