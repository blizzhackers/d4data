/**
 * Definition: AxialCylinder
 * Hash: b3d4d849
 */

#include "AxialCylinder.h"

void AxialCylinder::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpBase, base, current);
  current = ptr + 0xc;
  readData(&wdHeight, base, current);
  current = ptr + 0x10;
  readData(&wdRadius, base, current);
  ptr += 0x14;
}
