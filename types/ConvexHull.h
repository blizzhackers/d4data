/**
 * Definition: ConvexHull
 * Hash: 84987408
 */

#pragma once

#include "../types.h"
#include "IndexedTriangle.h"
#include "Matrix3x3.h"
#include "Plane.h"

#pragma push(pack, 1)

struct ConvexHull : public ComplexRead {
  DT_INT nVertexCount;
  DT_VARIABLEARRAY<DT_VECTOR3D> ptVertices;
  DT_INT nTriangleCount;
  DT_VARIABLEARRAY<IndexedTriangle> ptTriangles;
  DT_INT nPlaneCount;
  DT_VARIABLEARRAY<Plane> ptPlanes;
  Matrix3x3 mInertiaTensor;
  DT_VECTOR3D wvCenterOfMass;
  DT_FLOAT flArea;
  DT_FLOAT flVolume;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
