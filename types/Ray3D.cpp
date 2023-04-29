/**
 * Definition: Ray3D
 * Hash: 60313a3
 */

#include "Ray3D.h"

void Ray3D::read(const char* base, char* &ptr) {
  readData(&wpOrigin, base, ptr);
  readData(&wvDirection, base, ptr);
}
