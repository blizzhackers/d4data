/**
 * Definition: t971d55a3
 * Hash: 971d55a3
 */

#include "t971d55a3.h"

void t971d55a3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
}
