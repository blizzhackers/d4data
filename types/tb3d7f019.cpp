/**
 * Definition: tb3d7f019
 * Hash: b3d7f019
 */

#include "tb3d7f019.h"

void tb3d7f019::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&wpLocation, base, current);
  ptr += 0x1c;
}
