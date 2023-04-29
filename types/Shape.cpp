/**
 * Definition: Shape
 * Hash: 618a4b1
 */

#include "Shape.h"

void Shape::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&eType, base, ptr);
  readData(&eMaterial, base, ptr);
  readData(&nDegrade, base, ptr);
  readData(&flDensityFactor, base, ptr);
  readData(&flExplosionFactor, base, ptr);
  readData(&flVelocityFactor, base, ptr);
  readData(&tHull, base, ptr);
  readData(&tBox, base, ptr);
  readData(&tSphere, base, ptr);
  readData(&tCylinder, base, ptr);
  readData(&tCapsule, base, ptr);
}
