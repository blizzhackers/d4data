/**
 * Definition: BoneKeyInfo
 * Hash: e78d8579
 */

#pragma once

#include "../types.h"
#include "AnimTangent.h"

#pragma push(pack, 1)

struct BoneKeyInfo : public ComplexRead {
  DT_INT unk_b3f7acb;
  DT_INT unk_b22ae3c;
  AnimTangent tTangents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
