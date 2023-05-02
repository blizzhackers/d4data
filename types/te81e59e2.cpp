/**
 * Definition: te81e59e2
 * Hash: e81e59e2
 */

#include "te81e59e2.h"

void te81e59e2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&m_aVertices, base, current);
  current = ptr + 0x8;
  readData(&m_aPlanes, base, current);
  current = ptr + 0x10;
  readData(&m_aSubEdges, base, current);
  current = ptr + 0x18;
  readData(&m_aFaceSubEdges, base, current);
  current = ptr + 0x20;
  readData(&m_centroid, base, current);
  current = ptr + 0x2c;
  readData(&m_VertexCount, base, current);
  current = ptr + 0x30;
  readData(&m_FaceCount, base, current);
  current = ptr + 0x34;
  readData(&unk_5731ab4, base, current);
  current = ptr + 0x38;
  readData(&m_volume, base, current);
  current = ptr + 0x3c;
  readData(&m_area, base, current);
  ptr += 0x40;
}
