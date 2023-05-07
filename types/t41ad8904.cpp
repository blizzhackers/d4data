/**
 * Definition: t41ad8904
 * Hash: 41ad8904
 */

#include "t41ad8904.h"

void t41ad8904::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&isOpen, base, current);
  ptr += 0x14;
}
