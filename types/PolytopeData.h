/**
 * Definition: PolytopeData
 * Hash: 5d679d96
 */

#pragma once

#include "../types.h"
#include "te81e59e2.h"
#include "teabc2b2b.h"
#include "tfba0555c.h"

#pragma push(pack, 1)

struct PolytopeData : public ComplexRead {
  te81e59e2 unk_e96f671;
  DT_VARIABLEARRAY<DT_VECTOR3D> ptVertices;
  DT_VARIABLEARRAY<tfba0555c> ptPlanes;
  DT_VARIABLEARRAY<teabc2b2b> ptSubEdges;
  DT_VARIABLEARRAY<DT_BYTE> ptFaceSubEdges;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
