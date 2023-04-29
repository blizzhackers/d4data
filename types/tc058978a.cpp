/**
 * Definition: tc058978a
 * Hash: c058978a
 */

#include "tc058978a.h"

void tc058978a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
