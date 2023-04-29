/**
 * Definition: t79b4d566
 * Hash: 79b4d566
 */

#include "t79b4d566.h"

void t79b4d566::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
}
