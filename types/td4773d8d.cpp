/**
 * Definition: td4773d8d
 * Hash: d4773d8d
 */

#include "td4773d8d.h"

void td4773d8d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_799ca4d, base, ptr);
  readData(&snoOverridePower, base, ptr);
}
