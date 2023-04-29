/**
 * Definition: tf0e6041c
 * Hash: f0e6041c
 */

#include "tf0e6041c.h"

void tf0e6041c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5b5276a, base, ptr);
}
