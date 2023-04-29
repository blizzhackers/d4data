/**
 * Definition: tc2750a61
 * Hash: c2750a61
 */

#include "tc2750a61.h"

void tc2750a61::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&fPlayerClass, base, ptr);
}
