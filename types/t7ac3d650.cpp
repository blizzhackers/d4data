/**
 * Definition: t7ac3d650
 * Hash: 7ac3d650
 */

#include "t7ac3d650.h"

void t7ac3d650::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nCrafterType, base, current);
  ptr += 0x14;
}
