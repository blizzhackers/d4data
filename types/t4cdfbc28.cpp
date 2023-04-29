/**
 * Definition: t4cdfbc28
 * Hash: 4cdfbc28
 */

#include "t4cdfbc28.h"

void t4cdfbc28::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwValue, base, ptr);
}
