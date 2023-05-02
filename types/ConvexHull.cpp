/**
 * Definition: ConvexHull
 * Hash: 84987408
 */

#include "ConvexHull.h"

void ConvexHull::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nVertexCount, base, current);
  current = ptr + 0x8;
  readData(&ptVertices, base, current);
  current = ptr + 0x18;
  readData(&nTriangleCount, base, current);
  current = ptr + 0x20;
  readData(&ptTriangles, base, current);
  current = ptr + 0x30;
  readData(&nPlaneCount, base, current);
  current = ptr + 0x38;
  readData(&ptPlanes, base, current);
  current = ptr + 0x48;
  readData(&mInertiaTensor, base, current);
  current = ptr + 0x6c;
  readData(&wvCenterOfMass, base, current);
  current = ptr + 0x78;
  readData(&flArea, base, current);
  current = ptr + 0x7c;
  readData(&flVolume, base, current);
  ptr += 0x80;
}
