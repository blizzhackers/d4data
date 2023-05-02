/**
 * Definition: t69efba48
 * Hash: 69efba48
 */

#include "t69efba48.h"

void t69efba48::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
