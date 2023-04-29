/**
 * Definition: t45412253
 * Hash: 45412253
 */

#include "t45412253.h"

void t45412253::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
