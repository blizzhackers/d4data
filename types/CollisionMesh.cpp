/**
 * Definition: CollisionMesh
 * Hash: 7d15ac19
 */

#include "CollisionMesh.h"

void CollisionMesh::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_fb873e2, base, current);
  current = ptr + 0x30;
  readData(&ptDominoVertices, base, current);
  current = ptr + 0x40;
  readData(&ptDominoTriangles, base, current);
  current = ptr + 0x50;
  readData(&ptDominoNodes, base, current);
  current = ptr + 0x60;
  readData(&unk_b2f6ec8, base, current);
  current = ptr + 0x64;
  readData(&uFlags, base, current);
  current = ptr + 0x68;
  readData(&uMaterial, base, current);
  current = ptr + 0x6c;
  readData(&uGroupIndex, base, current);
  current = ptr + 0x70;
  readData(&unk_732e0b0, base, current);
  ptr += 0x80;
}
