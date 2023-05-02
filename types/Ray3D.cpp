/**
 * Definition: Ray3D
 * Hash: 60313a3
 */

#include "Ray3D.h"

void Ray3D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpOrigin, base, current);
  current = ptr + 0xc;
  readData(&wvDirection, base, current);
  ptr += 0x18;
}
