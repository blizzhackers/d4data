/**
 * Definition: t34b1bbe1
 * Hash: 34b1bbe1
 */

#include "t34b1bbe1.h"

void t34b1bbe1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
