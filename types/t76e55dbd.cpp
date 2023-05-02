/**
 * Definition: t76e55dbd
 * Hash: 76e55dbd
 */

#include "t76e55dbd.h"

void t76e55dbd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
