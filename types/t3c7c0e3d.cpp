/**
 * Definition: t3c7c0e3d
 * Hash: 3c7c0e3d
 */

#include "t3c7c0e3d.h"

void t3c7c0e3d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
