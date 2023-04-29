/**
 * Definition: ta84b96e7
 * Hash: a84b96e7
 */

#include "ta84b96e7.h"

void ta84b96e7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flRange, base, ptr);
}
