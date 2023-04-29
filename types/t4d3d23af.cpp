/**
 * Definition: t4d3d23af
 * Hash: 4d3d23af
 */

#include "t4d3d23af.h"

void t4d3d23af::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
}
