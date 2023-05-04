/**
 * Definition: Structure
 * Hash: 31c8cf71
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "BoneData.h"
#include "CollisionCapsule.h"
#include "CollisionMesh.h"
#include "SceneData.h"
#include "Sphere.h"
#include "tece011d4.h"

#pragma push(pack, 1)

struct Structure : public ComplexRead {
  DT_VARIABLEARRAY<CollisionMesh> ptCollisionMeshes;
  DT_VARIABLEARRAY<CollisionCapsule> ptCollisionCapsules;
  DT_VARIABLEARRAY<tece011d4> ptChunks;
  DT_VARIABLEARRAY<SceneData> ptSceneData;
  DT_VARIABLEARRAY<BoneData> ptBoneData;
  DT_UINT dwFlags;
  DT_FLOAT unk_6bd8898;
  Sphere wsBounds;
  AABB aabbBounds;
  DT_INT unk_d8c9b68;
  DT_INT64 ptPostprocessed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
