/**
 * Definition: td8824023
 * Hash: d8824023
 */

#include "td8824023.h"

void td8824023::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&accept, base, current);
  ptr += 0x14;
}
