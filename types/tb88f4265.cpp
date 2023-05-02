/**
 * Definition: tb88f4265
 * Hash: b88f4265
 */

#include "tb88f4265.h"

void tb88f4265::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&rx, base, current);
  current = ptr + 0x10;
  readData(&ry, base, current);
  current = ptr + 0x20;
  readData(&rz, base, current);
  current = ptr + 0x30;
  readData(&p, base, current);
  ptr += 0x40;
}
