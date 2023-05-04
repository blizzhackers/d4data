/**
 * Definition: SubzoneDefinition
 * Hash: c4469c6f
 */

#pragma once

#include "../types.h"
#include "LevelScalingData.h"
#include "t4203ae2e.h"

#pragma push(pack, 1)

struct SubzoneDefinition : public ComplexRead {
  DT_SNO<SnoGroup::World> unk_691c97c;
  DT_STARTLOC_NAME uEntranceGUID;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> arLevelAreas;
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> unk_110432b;
  DT_SNO<SnoGroup::Territory> snoTerritory;
  DT_ENUM<DT_INT> unk_d447cfd;
  DT_SNO<SnoGroup::World> unk_f34c43f;
  DT_SNO<SnoGroup::GameBalance> snoActorGroups;
  DT_INT64 ptPostprocessed;
  DT_VARIABLEARRAY<t4203ae2e> unk_9a1125c;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::World>> unk_d75e3a6;
  DT_UINT dwFlags;
  DT_INT unk_35fc338;
  DT_FIXEDARRAY<LevelScalingData, 4> unk_6f7f585;
  LevelScalingData unk_496a122;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
