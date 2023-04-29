/**
 * Definition: t5c83eb6c
 * Hash: 5c83eb6c
 */

#include "t5c83eb6c.h"

void t5c83eb6c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwHash, base, ptr);
  readData(&szString, base, ptr);
}
