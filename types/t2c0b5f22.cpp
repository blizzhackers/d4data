/**
 * Definition: t2c0b5f22
 * Hash: 2c0b5f22
 */

#include "t2c0b5f22.h"

void t2c0b5f22::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoEffectGroup, base, ptr);
}
