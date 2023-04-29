/**
 * Definition: ted5b6d19
 * Hash: ed5b6d19
 */

#include "ted5b6d19.h"

void ted5b6d19::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_49ab17c, base, ptr);
}
