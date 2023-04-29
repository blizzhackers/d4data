/**
 * Definition: PhysicsDefinition
 * Hash: ce12004c
 */

#include "PhysicsDefinition.h"

void PhysicsDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&nMaxIterations, base, ptr);
  readData(&flFriction, base, ptr);
  readData(&flRollingResistance, base, ptr);
  readData(&flRestitution, base, ptr);
  readData(&flLinearDamping, base, ptr);
  readData(&flAngularDamping, base, ptr);
  readData(&wCollisionMask, base, ptr);
  readData(&flDragCoeff, base, ptr);
  readData(&flAirBuoyancy, base, ptr);
  readData(&flAccelerationMax, base, ptr);
  readData(&flSpeedMax, base, ptr);
  readData(&unk_37dc27f, base, ptr);
  readData(&unk_b762b7a, base, ptr);
  readData(&unk_7b327fe, base, ptr);
}
