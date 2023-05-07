/**
 * Definition: SubObject
 * Hash: f5aaf621
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "ClothData.h"
#include "CollisionShape.h"
#include "SubObjectNameInfo.h"
#include "t51b6be94.h"
#include "t72081710.h"

#pragma push(pack, 1)

struct SubObject : public ComplexRead {
  DT_UINT dwFlags;
  DT_INT unk_334eb2d;
  DT_VARIABLEARRAY<ClothData> ptClothData;
  DT_VARIABLEARRAY<t72081710> unk_26f39c1;
  DT_UINT unk_e32b9c5;
  DT_UINT unk_87b4c64;
  DT_UINT unk_d28c748;
  DT_UINT dwAbSize;
  SubObjectNameInfo tNameInfo;
  DT_INT nMaterialIndex;
  DT_UINT dwSubObjectHash;
  DT_INT unk_79283f;
  DT_INT unk_45c6981;
  DT_INT unk_a758781;
  DT_INT unk_a1b71f5;
  DT_INT unk_95f2e14;
  DT_UINT unk_6c0cb90;
  DT_SNO<SnoGroup::Condition> unk_e354a1f;
  AABB aabbBounds;
  DT_VARIABLEARRAY<CollisionShape> ptShapes;
  DT_VARIABLEARRAY<DT_BYTE> unk_eba16f;
  DT_INT64 ptPostprocessed;
  DT_VARIABLEARRAY<t51b6be94> ptSegments;
  DT_VECTOR3D wpFixedPointPosOffset;
  DT_VECTOR3D wpFixedPointPosScale;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
