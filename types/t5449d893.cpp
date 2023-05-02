/**
 * Definition: t5449d893
 * Hash: 5449d893
 */

#include "t5449d893.h"

void t5449d893::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&flValue, base, current);
  ptr += 0x20;
}
