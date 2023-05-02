/**
 * Definition: t1d865fc7
 * Hash: 1d865fc7
 */

#include "t1d865fc7.h"

void t1d865fc7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szToken, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  ptr += 0x8;
}
