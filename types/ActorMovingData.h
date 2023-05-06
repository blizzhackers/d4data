/**
 * Definition: ActorMovingData
 * Hash: 2cfba1c3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorMovingData : public ComplexRead {
  DT_INT fGenerateFootstepParticles;
  DT_INT unk_56d76cc;
  DT_INT unk_9d48ee2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
