/**
 * Definition: ConvexHull
 * Hash: 84987408
 */

#include "ConvexHull.h"

void ConvexHull::read(const char* base, char* &ptr) {
  readData(&nVertexCount, base, ptr);
  readData(&ptVertices, base, ptr);
  readData(&nTriangleCount, base, ptr);
  readData(&ptTriangles, base, ptr);
  readData(&nPlaneCount, base, ptr);
  readData(&ptPlanes, base, ptr);
  readData(&mInertiaTensor, base, ptr);
  readData(&wvCenterOfMass, base, ptr);
  readData(&flArea, base, ptr);
  readData(&flVolume, base, ptr);
}
