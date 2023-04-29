/**
 * Definition: t58d3117c
 * Hash: 58d3117c
 */

#include "t58d3117c.h"

void t58d3117c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
}
