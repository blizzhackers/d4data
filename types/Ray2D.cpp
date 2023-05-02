/**
 * Definition: Ray2D
 * Hash: 6031382
 */

#include "Ray2D.h"

void Ray2D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpOrigin, base, current);
  current = ptr + 0x8;
  readData(&wvDirection, base, current);
  ptr += 0x10;
}
