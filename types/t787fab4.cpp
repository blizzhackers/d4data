/**
 * Definition: t787fab4
 * Hash: 787fab4
 */

#include "t787fab4.h"

void t787fab4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&vValue, base, ptr);
}
