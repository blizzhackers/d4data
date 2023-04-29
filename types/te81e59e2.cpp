/**
 * Definition: te81e59e2
 * Hash: e81e59e2
 */

#include "te81e59e2.h"

void te81e59e2::read(const char* base, char* &ptr) {
  readData(&m_aVertices, base, ptr);
  readData(&m_aPlanes, base, ptr);
  readData(&m_aSubEdges, base, ptr);
  readData(&m_aFaceSubEdges, base, ptr);
  readData(&m_centroid, base, ptr);
  readData(&m_VertexCount, base, ptr);
  readData(&m_FaceCount, base, ptr);
  readData(&unk_5731ab4, base, ptr);
  readData(&m_volume, base, ptr);
  readData(&m_area, base, ptr);
}
