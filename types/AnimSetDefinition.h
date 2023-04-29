/**
 * Definition: AnimSetDefinition
 * Hash: f9ad0e9a
 */

#pragma once

#include "../types.h"
#include "t3a448b70.h"
#include "t5524bcce.h"
#include "ta1889860.h"

#pragma push(pack, 1)

struct AnimSetDefinition : public ComplexRead {
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> ptWeaponClasses;
  DT_ENUM<DT_INT> unk_8fc438;
  DT_VARIABLEARRAY<t3a448b70> unk_b2a975f;
  DT_VARIABLEARRAY<t5524bcce> unk_d9dcd40;
  DT_VARIABLEARRAY<ta1889860> unk_4ff6b8e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
