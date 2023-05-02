/**
 * Definition: tc1ddc6d3
 * Hash: c1ddc6d3
 */

#include "tc1ddc6d3.h"

void tc1ddc6d3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&aNodes, base, current);
  current = ptr + 0x8;
  readData(&aVertices, base, current);
  current = ptr + 0x10;
  readData(&aTriangles, base, current);
  current = ptr + 0x18;
  readData(&nNodeCount, base, current);
  current = ptr + 0x1c;
  readData(&nVertexCount, base, current);
  current = ptr + 0x20;
  readData(&nTriangleCount, base, current);
  current = ptr + 0x24;
  readData(&height, base, current);
  current = ptr + 0x28;
  readData(&unk_c27e1a2, base, current);
  current = ptr + 0x2c;
  readData(&padding, base, current);
  ptr += 0x30;
}
