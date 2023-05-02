/**
 * Definition: tc7707f77
 * Hash: c7707f77
 */

#include "tc7707f77.h"

void tc7707f77::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nCrafterType, base, current);
  ptr += 0x14;
}
