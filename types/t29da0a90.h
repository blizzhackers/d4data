/**
 * Definition: t29da0a90
 * Hash: 29da0a90
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t29da0a90 : public ComplexRead {
  DT_FLOAT flRagdollVelocityFactor;
  DT_FLOAT flRagdollMomentumFactor;
  DT_FLOAT unk_665d2e1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
