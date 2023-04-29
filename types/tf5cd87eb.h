/**
 * Definition: tf5cd87eb
 * Hash: f5cd87eb
 */

#pragma once

#include "../types.h"
#include "CollisionCapsule.h"

#pragma push(pack, 1)

struct tf5cd87eb : public ComplexRead {
  CollisionCapsule tCapsule;
  DT_UINT unk_82bbe21;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
