/**
 * Definition: WorldServerData
 * Hash: 2e510e19
 */

#pragma once

#include "../types.h"
#include "SceneChunk.h"

#pragma push(pack, 1)

struct WorldServerData : public ComplexRead {
  DT_VARIABLEARRAY<SceneChunk> ptSceneChunks;
  DT_SNO<SnoGroup::Script> snoScript;
  DT_INT nSeed;
  DT_FLOAT flMinX;
  DT_FLOAT flMinY;
  DT_FLOAT flMaxX;
  DT_FLOAT flMaxY;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Weather>> arWeatherSNOs;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::SubZone>> unk_c9913ac;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
