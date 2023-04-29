/**
 * Definition: t47063e9a
 * Hash: 47063e9a
 */

#include "t47063e9a.h"

void t47063e9a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&vValue, base, ptr);
}
