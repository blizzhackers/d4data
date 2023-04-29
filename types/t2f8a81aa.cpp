/**
 * Definition: t2f8a81aa
 * Hash: 2f8a81aa
 */

#include "t2f8a81aa.h"

void t2f8a81aa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&vValue, base, ptr);
}
