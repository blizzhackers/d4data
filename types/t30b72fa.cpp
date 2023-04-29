/**
 * Definition: t30b72fa
 * Hash: 30b72fa
 */

#include "t30b72fa.h"

void t30b72fa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
