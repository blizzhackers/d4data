/**
 * Definition: CollisionMesh
 * Hash: 7d15ac19
 */

#include "CollisionMesh.h"

void CollisionMesh::read(const char* base, char* &ptr) {
  readData(&unk_fb873e2, base, ptr);
  readData(&ptDominoVertices, base, ptr);
  readData(&ptDominoTriangles, base, ptr);
  readData(&ptDominoNodes, base, ptr);
  readData(&unk_b2f6ec8, base, ptr);
  readData(&uFlags, base, ptr);
  readData(&uMaterial, base, ptr);
  readData(&uGroupIndex, base, ptr);
  readData(&unk_732e0b0, base, ptr);
}
