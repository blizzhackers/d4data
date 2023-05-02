/**
 * Definition: Triangle3D
 * Hash: 4ccf852d
 */

#include "Triangle3D.h"

void Triangle3D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp0, base, current);
  current = ptr + 0xc;
  readData(&wp1, base, current);
  current = ptr + 0x18;
  readData(&wp2, base, current);
  ptr += 0x24;
}
