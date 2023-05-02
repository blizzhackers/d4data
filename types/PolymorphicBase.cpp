/**
 * Definition: PolymorphicBase
 * Hash: 5d4bac71
 */

#include "PolymorphicBase.h"

void PolymorphicBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
