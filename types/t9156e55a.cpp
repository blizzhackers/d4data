/**
 * Definition: t9156e55a
 * Hash: 9156e55a
 */

#include "t9156e55a.h"

void t9156e55a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
