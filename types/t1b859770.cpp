/**
 * Definition: t1b859770
 * Hash: 1b859770
 */

#include "t1b859770.h"

void t1b859770::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eType, base, ptr);
}
