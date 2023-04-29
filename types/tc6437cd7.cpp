/**
 * Definition: tc6437cd7
 * Hash: c6437cd7
 */

#include "tc6437cd7.h"

void tc6437cd7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
