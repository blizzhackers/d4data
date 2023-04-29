/**
 * Definition: t8462796a
 * Hash: 8462796a
 */

#pragma once

#include "../types.h"
#include "AABB.h"
#include "t95119e98.h"

#pragma push(pack, 1)

struct t8462796a : public ComplexRead {
  DT_SNO<SnoGroup::Scene> snoScene;
  DT_SHARED_SERVER_DATA_ID idSScene;
  DT_VECTOR3D vWorldPos;
  AABB tAABB;
  t95119e98 tDRLGCreationInfo;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_SNO<SnoGroup::LevelArea> unk_d2632b1;
  DT_ENUM<DT_INT> unk_989f2d7;
  DT_FIXEDARRAY<DT_GBID<0x4>, 4> arLabels;
  DT_FIXEDARRAY<DT_INT, 2> unk_6dbdacd;
  DT_INT unk_a1db131;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
