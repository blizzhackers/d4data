/**
 * Definition: t11c81cb7
 * Hash: 11c81cb7
 */

#include "t11c81cb7.h"

void t11c81cb7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&nKey, base, current);
  current = ptr + 0x20;
  readData(&nIntValue, base, current);
  current = ptr + 0x24;
  readData(&flFloatValue, base, current);
  ptr += 0x28;
}
