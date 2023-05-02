/**
 * Definition: t9c9af4b3
 * Hash: 9c9af4b3
 */

#include "t9c9af4b3.h"

void t9c9af4b3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tParams, base, current);
  ptr += 0x560;
}
