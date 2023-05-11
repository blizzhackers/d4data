/**
 * Definition: AmbientSoundDefinition
 * Hash: ae8cacd2
 */

#pragma once

#include "../types.h"
#include "DynamicAudioState.h"
#include "DynamicGameParameter.h"
#include "RandomAmbientSoundParams.h"

#pragma push(pack, 1)

struct AmbientSoundDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Sound> snoBackground;
  DT_VARIABLEARRAY<RandomAmbientSoundParams> tRandomSounds;
  DynamicGameParameter tDynamicGameParameter;
  DynamicAudioState tDynamicAudioState;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
