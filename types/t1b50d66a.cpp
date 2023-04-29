/**
 * Definition: t1b50d66a
 * Hash: 1b50d66a
 */

#include "t1b50d66a.h"

void t1b50d66a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
