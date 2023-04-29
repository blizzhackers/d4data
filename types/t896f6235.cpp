/**
 * Definition: t896f6235
 * Hash: 896f6235
 */

#include "t896f6235.h"

void t896f6235::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
