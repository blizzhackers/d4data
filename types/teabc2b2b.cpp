/**
 * Definition: teabc2b2b
 * Hash: eabc2b2b
 */

#include "teabc2b2b.h"

void teabc2b2b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&twinOffset, base, current);
  current = ptr + 0x1;
  readData(&tail, base, current);
  current = ptr + 0x2;
  readData(&left, base, current);
  current = ptr + 0x3;
  readData(&next, base, current);
  ptr += 0x4;
}
