/**
 * Definition: t7eaf5b8
 * Hash: 7eaf5b8
 */

#include "t7eaf5b8.h"

void t7eaf5b8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
