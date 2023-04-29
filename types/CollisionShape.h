/**
 * Definition: CollisionShape
 * Hash: 20391c3d
 */

#pragma once

#include "../types.h"
#include "PolytopeData.h"

#pragma push(pack, 1)

struct CollisionShape : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> eMaterial;
  DT_INT nDegrade;
  DT_FLOAT flDensityFactor;
  DT_FLOAT flExplosionFactor;
  DT_FLOAT flVelocityFactor;
  DT_VARIABLEARRAY<PolytopeData> pPolytopeData;
  DT_VECTOR3D wp1;
  DT_VECTOR3D wp2;
  DT_FLOAT flRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
