/**
 * Definition: tdf5021f
 * Hash: df5021f
 */

#include "tdf5021f.h"

void tdf5021f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwStringHash, base, current);
  current = ptr + 0x20;
  readData(&szString, base, current);
  ptr += 0x30;
}
