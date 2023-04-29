/**
 * Definition: t70b1b85d
 * Hash: 70b1b85d
 */

#include "t70b1b85d.h"

void t70b1b85d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tSecondaryGroup, base, ptr);
}
