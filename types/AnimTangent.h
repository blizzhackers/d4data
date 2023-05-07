/**
 * Definition: AnimTangent
 * Hash: 248771f6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimTangent : public ComplexRead {
  DT_VECTOR2D unk_2c6615d;
  DT_VECTOR2D unk_2d879de;
  DT_VECTOR2D unk_2ea925f;
  DT_VECTOR2D unk_90e5235;
  DT_VECTOR2D unk_9206ab6;
  DT_VECTOR2D unk_9328337;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
