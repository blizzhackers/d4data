/**
 * Definition: Rect2D
 * Hash: c6a2ec24
 */

#include "Rect2D.h"

void Rect2D::read(const char* base, char* &ptr) {
  readData(&left, base, ptr);
  readData(&top, base, ptr);
  readData(&right, base, ptr);
  readData(&bottom, base, ptr);
}
