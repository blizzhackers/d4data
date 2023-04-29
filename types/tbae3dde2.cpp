/**
 * Definition: tbae3dde2
 * Hash: bae3dde2
 */

#include "tbae3dde2.h"

void tbae3dde2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&nPriority, base, ptr);
}
