/**
 * Definition: te838c752
 * Hash: e838c752
 */

#include "te838c752.h"

void te838c752::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
