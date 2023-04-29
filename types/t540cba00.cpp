/**
 * Definition: t540cba00
 * Hash: 540cba00
 */

#include "t540cba00.h"

void t540cba00::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
}
