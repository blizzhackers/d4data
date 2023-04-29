/**
 * Definition: t15d1144c
 * Hash: 15d1144c
 */

#include "t15d1144c.h"

void t15d1144c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
