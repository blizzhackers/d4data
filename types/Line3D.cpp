/**
 * Definition: Line3D
 * Hash: b8f222df
 */

#include "Line3D.h"

void Line3D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp, base, current);
  current = ptr + 0xc;
  readData(&wv, base, current);
  ptr += 0x18;
}
