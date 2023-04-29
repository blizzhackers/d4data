/**
 * Definition: tedf178eb
 * Hash: edf178eb
 */

#include "tedf178eb.h"

void tedf178eb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
