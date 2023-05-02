/**
 * Definition: tfba0555c
 * Hash: fba0555c
 */

#include "tfba0555c.h"

void tfba0555c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&normal, base, current);
  current = ptr + 0xc;
  readData(&offset, base, current);
  ptr += 0x10;
}
