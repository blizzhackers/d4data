/**
 * Definition: t353c7499
 * Hash: 353c7499
 */

#include "t353c7499.h"

void t353c7499::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
