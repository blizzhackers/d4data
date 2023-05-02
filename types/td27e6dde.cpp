/**
 * Definition: td27e6dde
 * Hash: d27e6dde
 */

#include "td27e6dde.h"

void td27e6dde::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
