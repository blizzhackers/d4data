/**
 * Definition: t4824e5e3
 * Hash: 4824e5e3
 */

#include "t4824e5e3.h"

void t4824e5e3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
