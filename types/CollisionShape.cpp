/**
 * Definition: CollisionShape
 * Hash: 20391c3d
 */

#include "CollisionShape.h"

void CollisionShape::read(const char* base, char* &ptr) {
  readData(&dwFlags, base, ptr);
  readData(&eType, base, ptr);
  readData(&eMaterial, base, ptr);
  readData(&nDegrade, base, ptr);
  readData(&flDensityFactor, base, ptr);
  readData(&flExplosionFactor, base, ptr);
  readData(&flVelocityFactor, base, ptr);
  readData(&pPolytopeData, base, ptr);
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
  readData(&flRadius, base, ptr);
}
