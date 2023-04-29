/**
 * Definition: t29e548a8
 * Hash: 29e548a8
 */

#include "t29e548a8.h"

void t29e548a8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
