/**
 * Definition: t5a98a8eb
 * Hash: 5a98a8eb
 */

#include "t5a98a8eb.h"

void t5a98a8eb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&vValue, base, ptr);
}
