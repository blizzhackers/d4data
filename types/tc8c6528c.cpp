/**
 * Definition: tc8c6528c
 * Hash: c8c6528c
 */

#include "tc8c6528c.h"

void tc8c6528c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
