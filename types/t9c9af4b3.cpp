/**
 * Definition: t9c9af4b3
 * Hash: 9c9af4b3
 */

#include "t9c9af4b3.h"

void t9c9af4b3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tParams, base, ptr);
}
