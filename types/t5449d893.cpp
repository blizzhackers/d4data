/**
 * Definition: t5449d893
 * Hash: 5449d893
 */

#include "t5449d893.h"

void t5449d893::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flValue, base, ptr);
}
