/**
 * Definition: tf87e21c
 * Hash: f87e21c
 */

#include "tf87e21c.h"

void tf87e21c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
