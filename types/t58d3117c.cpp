/**
 * Definition: t58d3117c
 * Hash: 58d3117c
 */

#include "t58d3117c.h"

void t58d3117c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
