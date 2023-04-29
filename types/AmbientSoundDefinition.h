/**
 * Definition: AmbientSoundDefinition
 * Hash: ae8cacd2
 */

#pragma once

#include "../types.h"
#include "RandomAmbientSoundParams.h"
#include "te6240d20.h"
#include "tfe1cc8d8.h"

#pragma push(pack, 1)

struct AmbientSoundDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Sound> snoBackground;
  DT_VARIABLEARRAY<RandomAmbientSoundParams> tRandomSounds;
  te6240d20 unk_58f94;
  tfe1cc8d8 unk_243fcc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
