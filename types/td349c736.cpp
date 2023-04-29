/**
 * Definition: td349c736
 * Hash: d349c736
 */

#include "td349c736.h"

void td349c736::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
