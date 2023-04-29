/**
 * Definition: t3ee2b992
 * Hash: 3ee2b992
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3ee2b992 : public ComplexRead {
  DT_SNO<SnoGroup::Particle> snoParticle;
  DT_FLOAT unk_9644926;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
