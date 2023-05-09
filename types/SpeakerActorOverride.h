/**
 * Definition: SpeakerActorOverride
 * Hash: 865a8524
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SpeakerActorOverride : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
