/**
 * Definition: t4d0ffb5e
 * Hash: 4d0ffb5e
 */

#include "t4d0ffb5e.h"

void t4d0ffb5e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flValue, base, ptr);
}
