/**
 * Definition: t21df8be8
 * Hash: 21df8be8
 */

#include "t21df8be8.h"

void t21df8be8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bComplete, base, current);
  ptr += 0x14;
}
