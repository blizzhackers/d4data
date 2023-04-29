/**
 * Definition: tc0801b3a
 * Hash: c0801b3a
 */

#include "tc0801b3a.h"

void tc0801b3a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
