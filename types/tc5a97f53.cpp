/**
 * Definition: tc5a97f53
 * Hash: c5a97f53
 */

#include "tc5a97f53.h"

void tc5a97f53::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eGender, base, current);
  ptr += 0x20;
}
