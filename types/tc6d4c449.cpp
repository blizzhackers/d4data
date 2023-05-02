/**
 * Definition: tc6d4c449
 * Hash: c6d4c449
 */

#include "tc6d4c449.h"

void tc6d4c449::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hIcon, base, current);
  current = ptr + 0x4;
  readData(&hTitle, base, current);
  current = ptr + 0x8;
  readData(&hDescription, base, current);
  ptr += 0xc;
}
