/**
 * Definition: t9bc33fb9
 * Hash: 9bc33fb9
 */

#include "t9bc33fb9.h"

void t9bc33fb9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x14;
}
