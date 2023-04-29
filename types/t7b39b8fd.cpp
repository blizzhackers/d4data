/**
 * Definition: t7b39b8fd
 * Hash: 7b39b8fd
 */

#include "t7b39b8fd.h"

void t7b39b8fd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
