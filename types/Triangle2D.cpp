/**
 * Definition: Triangle2D
 * Hash: 4ccf850c
 */

#include "Triangle2D.h"

void Triangle2D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp0, base, current);
  current = ptr + 0x8;
  readData(&wp1, base, current);
  current = ptr + 0x10;
  readData(&wp2, base, current);
  ptr += 0x18;
}
