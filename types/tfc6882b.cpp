/**
 * Definition: tfc6882b
 * Hash: fc6882b
 */

#include "tfc6882b.h"

void tfc6882b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&uProfileAwardId, base, ptr);
  readData(&dwPad, base, ptr);
}
