/**
 * Definition: t4e454f30
 * Hash: 4e454f30
 */

#include "t4e454f30.h"

void t4e454f30::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoWorld, base, ptr);
}
