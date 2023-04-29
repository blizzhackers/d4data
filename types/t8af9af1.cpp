/**
 * Definition: t8af9af1
 * Hash: 8af9af1
 */

#include "t8af9af1.h"

void t8af9af1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
