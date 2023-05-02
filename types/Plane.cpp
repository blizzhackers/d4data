/**
 * Definition: Plane
 * Hash: 5e48c70
 */

#include "Plane.h"

void Plane::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wvNormal, base, current);
  current = ptr + 0xc;
  readData(&wce, base, current);
  ptr += 0x10;
}
