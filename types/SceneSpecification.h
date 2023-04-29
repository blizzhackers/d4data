/**
 * Definition: SceneSpecification
 * Hash: 13555eaf
 */

#pragma once

#include "../types.h"
#include "t4e8e96e4.h"

#pragma push(pack, 1)

struct SceneSpecification : public ComplexRead {
  DT_UINT dwFlags;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_STARTLOC_NAME unk_74a9537;
  DT_SNO<SnoGroup::World> snoPrevWorld;
  DT_STARTLOC_NAME uPrevEntranceGUID;
  DT_SNO<SnoGroup::LevelArea> snoPrevLevelArea;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;
  DT_SNO<SnoGroup::Weather> snoWeather;
  DT_SNO<SnoGroup::World> snoPresetWorld;
  DT_INT nSceneChunk;
  DT_VARIABLEARRAY<t4e8e96e4> unk_c9913ac;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
