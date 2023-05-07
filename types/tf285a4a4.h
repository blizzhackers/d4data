/**
 * Definition: tf285a4a4
 * Hash: f285a4a4
 */

#pragma once

#include "../types.h"
#include "HeroPreset.h"
#include "MountPreset.h"
#include "NPCPreset.h"

#pragma push(pack, 1)

struct tf285a4a4 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<HeroPreset> arHeroes;
  DT_VARIABLEARRAY<MountPreset> unk_8189b39;
  DT_VARIABLEARRAY<NPCPreset> arNPCs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
