/**
 * Definition: Shape
 * Hash: 618a4b1
 */

#include "Shape.h"

void Shape::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&eType, base, current);
  current = ptr + 0x8;
  readData(&eMaterial, base, current);
  current = ptr + 0xc;
  readData(&nDegrade, base, current);
  current = ptr + 0x10;
  readData(&flDensityFactor, base, current);
  current = ptr + 0x14;
  readData(&flExplosionFactor, base, current);
  current = ptr + 0x18;
  readData(&flVelocityFactor, base, current);
  current = ptr + 0x20;
  readData(&tHull, base, current);
  current = ptr + 0xa0;
  readData(&tBox, base, current);
  current = ptr + 0xc8;
  readData(&tSphere, base, current);
  current = ptr + 0xd8;
  readData(&tCylinder, base, current);
  current = ptr + 0xf4;
  readData(&tCapsule, base, current);
  ptr += 0x110;
}
