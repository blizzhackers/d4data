/**
 * Definition: t4824e5e3
 * Hash: 4824e5e3
 */

#include "t4824e5e3.h"

void t4824e5e3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
}
