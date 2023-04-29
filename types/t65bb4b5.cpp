/**
 * Definition: t65bb4b5
 * Hash: 65bb4b5
 */

#include "t65bb4b5.h"

void t65bb4b5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&bIsPlayer, base, ptr);
}
