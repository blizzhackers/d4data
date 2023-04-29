/**
 * Definition: Triangle3D
 * Hash: 4ccf852d
 */

#include "Triangle3D.h"

void Triangle3D::read(const char* base, char* &ptr) {
  readData(&wp0, base, ptr);
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
}
