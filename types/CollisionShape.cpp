/**
 * Definition: CollisionShape
 * Hash: 20391c3d
 */

#include "CollisionShape.h"

void CollisionShape::read(const char* base, char* &ptr) {
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
  readData(&pPolytopeData, base, current);
  current = ptr + 0x30;
  readData(&wp1, base, current);
  current = ptr + 0x3c;
  readData(&wp2, base, current);
  current = ptr + 0x48;
  readData(&flRadius, base, current);
  ptr += 0x50;
}
