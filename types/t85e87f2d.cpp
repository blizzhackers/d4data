/**
 * Definition: t85e87f2d
 * Hash: 85e87f2d
 */

#include "t85e87f2d.h"

void t85e87f2d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  current = ptr + 0x18;
  readData(&unk_b020582, base, current);
  ptr += 0x1c;
}
