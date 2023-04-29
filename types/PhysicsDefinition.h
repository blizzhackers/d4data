/**
 * Definition: PhysicsDefinition
 * Hash: ce12004c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PhysicsDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_INT nMaxIterations;
  DT_FLOAT flFriction;
  DT_FLOAT flRollingResistance;
  DT_FLOAT flRestitution;
  DT_FLOAT flLinearDamping;
  DT_FLOAT flAngularDamping;
  DT_UINT wCollisionMask;
  DT_FLOAT flDragCoeff;
  DT_FLOAT flAirBuoyancy;
  DT_FLOAT flAccelerationMax;
  DT_FLOAT flSpeedMax;
  DT_FLOAT unk_37dc27f;
  DT_RANGE<DT_INT> unk_b762b7a;
  DT_FLOAT unk_7b327fe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
