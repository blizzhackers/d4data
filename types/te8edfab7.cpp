/**
 * Definition: te8edfab7
 * Hash: e8edfab7
 */

#include "te8edfab7.h"

void te8edfab7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
