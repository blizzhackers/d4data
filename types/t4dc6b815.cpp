/**
 * Definition: t4dc6b815
 * Hash: 4dc6b815
 */

#include "t4dc6b815.h"

void t4dc6b815::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoPower, base, ptr);
}
