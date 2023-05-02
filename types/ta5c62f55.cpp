/**
 * Definition: ta5c62f55
 * Hash: a5c62f55
 */

#include "ta5c62f55.h"

void ta5c62f55::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&params, base, current);
  current = ptr + 0x10;
  readData(&scale, base, current);
  current = ptr + 0x20;
  readData(&i1, base, current);
  current = ptr + 0x22;
  readData(&i2, base, current);
  current = ptr + 0x24;
  readData(&padding, base, current);
  ptr += 0x30;
}
