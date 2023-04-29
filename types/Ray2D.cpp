/**
 * Definition: Ray2D
 * Hash: 6031382
 */

#include "Ray2D.h"

void Ray2D::read(const char* base, char* &ptr) {
  readData(&wpOrigin, base, ptr);
  readData(&wvDirection, base, ptr);
}
