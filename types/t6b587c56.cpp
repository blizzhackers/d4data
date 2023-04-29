/**
 * Definition: t6b587c56
 * Hash: 6b587c56
 */

#include "t6b587c56.h"

void t6b587c56::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flRadius, base, ptr);
}
