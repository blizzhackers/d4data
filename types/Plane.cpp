/**
 * Definition: Plane
 * Hash: 5e48c70
 */

#include "Plane.h"

void Plane::read(const char* base, char* &ptr) {
  readData(&wvNormal, base, ptr);
  readData(&wce, base, ptr);
}
