/**
 * Definition: Triangle2D
 * Hash: 4ccf850c
 */

#include "Triangle2D.h"

void Triangle2D::read(const char* base, char* &ptr) {
  readData(&wp0, base, ptr);
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
}
