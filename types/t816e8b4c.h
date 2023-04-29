/**
 * Definition: t816e8b4c
 * Hash: 816e8b4c
 */

#pragma once

#include "../types.h"
#include "CollisionCapsule.h"

#pragma push(pack, 1)

struct t816e8b4c : public ComplexRead {
  CollisionCapsule tCapsule;
  DT_INT unk_bb57eb6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
