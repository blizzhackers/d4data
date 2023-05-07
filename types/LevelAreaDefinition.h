/**
 * Definition: LevelAreaDefinition
 * Hash: d3e96a9a
 */

#pragma once

#include "../types.h"
#include "LevelScalingData.h"
#include "t5436b3aa.h"

#pragma push(pack, 1)

struct LevelAreaDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_SNO<SnoGroup::Weather> snoWeather;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_SNO<SnoGroup::Observer> unk_4709778;
  DT_SNO<SnoGroup::Condition> unk_926359f;
  DT_INT unk_27d289f;
  DT_RGBACOLOR unk_3d7c8a2;
  DT_SNO<SnoGroup::FogofWar> snoFogOfWar;
  LevelScalingData unk_61c02e8;
  DT_FIXEDARRAY<LevelScalingData, 4> unk_4e56acb;
  t5436b3aa tServices;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
