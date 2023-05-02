/**
 * Definition: t15872dca
 * Hash: 15872dca
 */

#include "t15872dca.h"

void t15872dca::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  ptr += 0x18;
}
