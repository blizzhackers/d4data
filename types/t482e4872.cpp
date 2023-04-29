/**
 * Definition: t482e4872
 * Hash: 482e4872
 */

#include "t482e4872.h"

void t482e4872::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&idValue, base, ptr);
}
