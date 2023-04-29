/**
 * Definition: tb7693c39
 * Hash: b7693c39
 */

#include "tb7693c39.h"

void tb7693c39::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPrimaryGroup, base, ptr);
}
