/**
 * Definition: t4d3d23af
 * Hash: 4d3d23af
 */

#include "t4d3d23af.h"

void t4d3d23af::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
