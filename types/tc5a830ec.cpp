/**
 * Definition: tc5a830ec
 * Hash: c5a830ec
 */

#include "tc5a830ec.h"

void tc5a830ec::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_362349d, base, ptr);
  readData(&nPadding, base, ptr);
}
