/**
 * Definition: t14b7b585
 * Hash: 14b7b585
 */

#include "t14b7b585.h"

void t14b7b585::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
