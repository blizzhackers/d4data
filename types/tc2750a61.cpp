/**
 * Definition: tc2750a61
 * Hash: c2750a61
 */

#include "tc2750a61.h"

void tc2750a61::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&fPlayerClass, base, current);
  ptr += 0x30;
}
