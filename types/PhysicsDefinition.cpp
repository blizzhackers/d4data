/**
 * Definition: PhysicsDefinition
 * Hash: ce12004c
 */

#include "PhysicsDefinition.h"

void PhysicsDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&nMaxIterations, base, current);
  current = ptr + 0x10;
  readData(&flFriction, base, current);
  current = ptr + 0x14;
  readData(&flRollingResistance, base, current);
  current = ptr + 0x18;
  readData(&flRestitution, base, current);
  current = ptr + 0x1c;
  readData(&flLinearDamping, base, current);
  current = ptr + 0x20;
  readData(&flAngularDamping, base, current);
  current = ptr + 0x24;
  readData(&wCollisionMask, base, current);
  current = ptr + 0x28;
  readData(&flDragCoeff, base, current);
  current = ptr + 0x2c;
  readData(&flAirBuoyancy, base, current);
  current = ptr + 0x30;
  readData(&flAccelerationMax, base, current);
  current = ptr + 0x34;
  readData(&flSpeedMax, base, current);
  current = ptr + 0x38;
  readData(&unk_37dc27f, base, current);
  current = ptr + 0x3c;
  readData(&unk_b762b7a, base, current);
  current = ptr + 0x44;
  readData(&unk_7b327fe, base, current);
  ptr += 0x48;
}
