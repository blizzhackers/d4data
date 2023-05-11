/**
 * Definition: AudioContextDefinition
 * Hash: dea394a0
 */

#pragma once

#include "../types.h"
#include "tb593e3c8.h"
#include "tfa97e5b9.h"

#pragma push(pack, 1)

struct AudioContextDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Music> snoMusic;
  DT_SNO<SnoGroup::AmbientSound> snoAmbient;
  DT_SNO<SnoGroup::Reverb> snoReverb;
  DT_INT unk_2d0db3d;
  DT_INT unk_e197f62;
  tfa97e5b9 unk_d110c10;
  DT_VARIABLEARRAY<tb593e3c8> unk_245a799;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
