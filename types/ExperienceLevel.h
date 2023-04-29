/**
 * Definition: ExperienceLevel
 * Hash: ceb15e0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ExperienceLevel : public ComplexRead {
  DT_INT64 nDeltaXP;
  DT_INT unk_66201eb;
  DT_FLOAT flLifeStealMultiplier;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
