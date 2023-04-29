/**
 * Definition: t602be163
 * Hash: 602be163
 */

#include "t602be163.h"

void t602be163::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&uProfileAwardId, base, ptr);
  readData(&dwPad, base, ptr);
}
