/**
 * Definition: ActorCollisionFlags
 * Hash: a4e7ec52
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorCollisionFlags : public ComplexRead {
  DT_UINT uDynamicFlagsNoOverlap;
  DT_UINT uDynamicMyFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
