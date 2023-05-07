/**
 * Definition: t7766d6f5
 * Hash: 7766d6f5
 */

#include "t7766d6f5.h"

void t7766d6f5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eUnitType, base, current);
  ptr += 0x14;
}
