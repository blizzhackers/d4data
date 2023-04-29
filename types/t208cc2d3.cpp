/**
 * Definition: t208cc2d3
 * Hash: 208cc2d3
 */

#include "t208cc2d3.h"

void t208cc2d3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoReputation, base, ptr);
}
