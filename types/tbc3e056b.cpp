/**
 * Definition: tbc3e056b
 * Hash: bc3e056b
 */

#include "tbc3e056b.h"

void tbc3e056b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
