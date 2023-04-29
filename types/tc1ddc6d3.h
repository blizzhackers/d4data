/**
 * Definition: tc1ddc6d3
 * Hash: c1ddc6d3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc1ddc6d3 : public ComplexRead {
  DT_INT64 aNodes;
  DT_INT64 aVertices;
  DT_INT64 aTriangles;
  DT_INT nNodeCount;
  DT_INT nVertexCount;
  DT_INT nTriangleCount;
  DT_INT height;
  DT_FLOAT unk_c27e1a2;
  DT_INT unk_7092ef7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
