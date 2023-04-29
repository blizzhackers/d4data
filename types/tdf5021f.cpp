/**
 * Definition: tdf5021f
 * Hash: df5021f
 */

#include "tdf5021f.h"

void tdf5021f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwStringHash, base, ptr);
  readData(&szString, base, ptr);
}
