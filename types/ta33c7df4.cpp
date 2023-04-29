/**
 * Definition: ta33c7df4
 * Hash: a33c7df4
 */

#include "ta33c7df4.h"

void ta33c7df4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoGlyph, base, ptr);
  readData(&dwNodeIndex, base, ptr);
}
