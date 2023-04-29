/**
 * Definition: tb8cadcb0
 * Hash: b8cadcb0
 */

#include "tb8cadcb0.h"

void tb8cadcb0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
