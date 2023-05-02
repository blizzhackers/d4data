/**
 * Definition: tc1d35c16
 * Hash: c1d35c16
 */

#include "tc1d35c16.h"

void tc1d35c16::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  ptr += 0x4;
}
