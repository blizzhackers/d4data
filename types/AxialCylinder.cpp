/**
 * Definition: AxialCylinder
 * Hash: b3d4d849
 */

#include "AxialCylinder.h"

void AxialCylinder::read(const char* base, char* &ptr) {
  readData(&wpBase, base, ptr);
  readData(&wdHeight, base, ptr);
  readData(&wdRadius, base, ptr);
}
