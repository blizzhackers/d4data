/**
 * Definition: IRect2D
 * Hash: b9fe3f2d
 */

#include "IRect2D.h"

void IRect2D::read(const char* base, char* &ptr) {
  readData(&left, base, ptr);
  readData(&top, base, ptr);
  readData(&right, base, ptr);
  readData(&bottom, base, ptr);
}
