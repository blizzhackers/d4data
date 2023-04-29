/**
 * Definition: Line3D
 * Hash: b8f222df
 */

#include "Line3D.h"

void Line3D::read(const char* base, char* &ptr) {
  readData(&wp, base, ptr);
  readData(&wv, base, ptr);
}
