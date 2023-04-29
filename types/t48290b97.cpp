/**
 * Definition: t48290b97
 * Hash: 48290b97
 */

#include "t48290b97.h"

void t48290b97::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoItem, base, ptr);
}
