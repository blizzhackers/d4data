/**
 * Definition: t169210d9
 * Hash: 169210d9
 */

#include "t169210d9.h"

void t169210d9::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
