/**
 * Definition: t1fb663fe
 * Hash: 1fb663fe
 */

#include "t1fb663fe.h"

void t1fb663fe::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
