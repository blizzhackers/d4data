/**
 * Definition: Shape
 * Hash: 618a4b1
 */

#pragma once

#include "../types.h"
#include "Capsule.h"
#include "ConvexHull.h"
#include "Cylinder.h"
#include "OBB.h"
#include "Sphere.h"

#pragma push(pack, 1)

struct Shape : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> eMaterial;
  DT_INT nDegrade;
  DT_FLOAT flDensityFactor;
  DT_FLOAT flExplosionFactor;
  DT_FLOAT flVelocityFactor;
  ConvexHull tHull;
  OBB tBox;
  Sphere tSphere;
  Cylinder tCylinder;
  Capsule tCapsule;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
