/**
 * Definition: t6032ac6a
 * Hash: 6032ac6a
 */

#include "t6032ac6a.h"

void t6032ac6a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&dwValue, base, current);
  ptr += 0x8;
}
