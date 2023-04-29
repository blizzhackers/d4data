/**
 * Definition: ActorCollisionData
 * Hash: 719926df
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "AxialCylinder.h"
#include "CollisionSettings.h"
#include "t17bd50db.h"

#pragma push(pack, 1)

struct ActorCollisionData : public ComplexRead {
  CollisionSettings tCollisionSettings;
  DT_ENUM<DT_INT> eCollisionShape;
  AxialCylinder wcylCollision;
  AABB aabbCollision;
  DT_INT unk_3d328de;
  DT_INT unk_7a83a6d;
  DT_INT unk_7078ee3;
  DT_FLOAT unk_1ddc60c;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_FLOAT unk_c5b3851;
  DT_VARIABLEARRAY<t17bd50db> unk_523b9d9;
  t17bd50db unk_ce78a30;
  t17bd50db unk_f26505b;
  DT_INT unk_c627b16;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
