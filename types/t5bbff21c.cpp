/**
 * Definition: t5bbff21c
 * Hash: 5bbff21c
 */

#include "t5bbff21c.h"

void t5bbff21c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
