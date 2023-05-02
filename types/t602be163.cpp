/**
 * Definition: t602be163
 * Hash: 602be163
 */

#include "t602be163.h"

void t602be163::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&uProfileAwardId, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
