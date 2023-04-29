/**
 * Definition: t954deb71
 * Hash: 954deb71
 */

#include "t954deb71.h"

void t954deb71::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
