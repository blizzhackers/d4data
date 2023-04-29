/**
 * Definition: t601adde9
 * Hash: 601adde9
 */

#include "t601adde9.h"

void t601adde9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&idValue, base, ptr);
}
