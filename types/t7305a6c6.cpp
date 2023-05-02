/**
 * Definition: t7305a6c6
 * Hash: 7305a6c6
 */

#include "t7305a6c6.h"

void t7305a6c6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szText, base, current);
  ptr += 0x110;
}
