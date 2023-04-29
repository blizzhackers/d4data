/**
 * Definition: t11c81cb7
 * Hash: 11c81cb7
 */

#include "t11c81cb7.h"

void t11c81cb7::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&nKey, base, ptr);
  readData(&nIntValue, base, ptr);
  readData(&flFloatValue, base, ptr);
}
