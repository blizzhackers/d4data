/**
 * Definition: t8dc0ff21
 * Hash: 8dc0ff21
 */

#include "t8dc0ff21.h"

void t8dc0ff21::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&vValue, base, ptr);
}
