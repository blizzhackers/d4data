/**
 * Definition: bcQuat
 * Hash: ebc770e0
 */

#include "bcQuat.h"

void bcQuat::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&x, base, current);
  current = ptr + 0x4;
  readData(&y, base, current);
  current = ptr + 0x8;
  readData(&z, base, current);
  current = ptr + 0xc;
  readData(&w, base, current);
  ptr += 0x10;
}
