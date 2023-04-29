/**
 * Definition: tb1cccfae
 * Hash: b1cccfae
 */

#pragma once

#include "../types.h"
#include "ta1e2d5ab.h"

#pragma push(pack, 1)

struct tb1cccfae : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> arCamps;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::World>> arDungeons;
  DT_VARIABLEARRAY<DT_GBID<0x1c>> unk_2431f29;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> unk_3d8089d;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> arWaypoints;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::FogofWar>> arFogOfWar;
  DT_FIXEDARRAY<ta1e2d5ab, 5> unk_e89c432;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
