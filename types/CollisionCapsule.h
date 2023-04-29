/**
 * Definition: CollisionCapsule
 * Hash: 340a9e19
 */

#pragma once

#include "../types.h"
#include "Hardpoint.h"

#pragma push(pack, 1)

struct CollisionCapsule : public ComplexRead {
  DT_FLOAT unk_713d71b;
  DT_FLOAT unk_713d71c;
  DT_FLOAT flLength;
  Hardpoint tHardpoint;
  DT_UINT unk_2588cf9;
  DT_ENUM<DT_INT> unk_d094b9a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
