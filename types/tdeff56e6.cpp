/**
 * Definition: tdeff56e6
 * Hash: deff56e6
 */

#include "tdeff56e6.h"

void tdeff56e6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
