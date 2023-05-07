/**
 * Definition: t34ef6b9c
 * Hash: 34ef6b9c
 */

#include "t34ef6b9c.h"

void t34ef6b9c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&annVendor, base, current);
  ptr += 0x20;
}
