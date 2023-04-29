/**
 * Definition: te81e59e2
 * Hash: e81e59e2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te81e59e2 : public ComplexRead {
  DT_INT64 m_aVertices;
  DT_INT64 m_aPlanes;
  DT_INT64 m_aSubEdges;
  DT_INT64 m_aFaceSubEdges;
  DT_VECTOR3D m_centroid;
  DT_INT m_VertexCount;
  DT_INT m_FaceCount;
  DT_INT unk_5731ab4;
  DT_FLOAT m_volume;
  DT_FLOAT m_area;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
