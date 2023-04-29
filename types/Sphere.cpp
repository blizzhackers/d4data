/**
 * Definition: Sphere
 * Hash: c9c1a8c7
 */

#include "Sphere.h"

void Sphere::read(const char* base, char* &ptr) {
  readData(&wpCenter, base, ptr);
  readData(&wdRadius, base, ptr);
}
