/**
 * Definition: tc1ddc6d3
 * Hash: c1ddc6d3
 */

#include "tc1ddc6d3.h"

void tc1ddc6d3::read(const char* base, char* &ptr) {
  readData(&aNodes, base, ptr);
  readData(&aVertices, base, ptr);
  readData(&aTriangles, base, ptr);
  readData(&nNodeCount, base, ptr);
  readData(&nVertexCount, base, ptr);
  readData(&nTriangleCount, base, ptr);
  readData(&height, base, ptr);
  readData(&unk_c27e1a2, base, ptr);
  readData(&unk_7092ef7, base, ptr);
}
