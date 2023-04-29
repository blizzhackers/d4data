/**
 * Definition: RandomAmbientSoundParams
 * Hash: beee0bee
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RandomAmbientSoundParams : public ComplexRead {
  DT_SNO<SnoGroup::Sound> snoSound;
  DT_RANGE<DT_INT> tRadiusRange;
  DT_RANGE<DT_INT> unk_84d8f3a;
  DT_RANGE<DT_INT> unk_99bfb44;
  DT_ENUM<DT_INT> unk_ff43907;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
