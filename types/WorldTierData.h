/**
 * Definition: WorldTierData
 * Hash: d73778d6
 */

#pragma once

#include "../types.h"
#include "AttributeSpecifier.h"
#include "LevelScalingData.h"

#pragma push(pack, 1)

struct WorldTierData : public ComplexRead {
  DT_UINT dwUnlockLevel;
  DT_INT unk_db9e2c;
  DT_VARIABLEARRAY<AttributeSpecifier> unk_2281d38;
  LevelScalingData tLevelScalingData;
  DT_INT unk_2bca372;
  DT_INT unk_b1d243f;
  DT_INT unk_a4f6399;
  DT_FLOAT unk_458b4ff;
  DT_FLOAT unk_6bdfabc;
  DT_FLOAT unk_de899e2;
  DT_FLOAT unk_4404336;
  DT_FLOAT unk_f40f193;
  DT_FLOAT unk_d6bbd39;
  DT_FLOAT unk_e362b2e;
  DT_FLOAT unk_49768b;
  DT_FLOAT unk_bc88631;
  DT_FLOAT unk_b794376;
  DT_FLOAT unk_7fd09d3;
  DT_FLOAT unk_565b579;
  DT_FLOAT unk_60d111b;
  DT_FLOAT unk_e743158;
  DT_FLOAT unk_633e27e;
  DT_BYTE unk_e9ded47;
  DT_VARIABLEARRAY<AttributeSpecifier> unk_9834393;
  DT_FIXEDARRAY<DT_FLOAT, 3> unk_5a79ac1;
  DT_FLOAT unk_fffd308;
  DT_FIXEDARRAY<DT_INT, 3> unk_a420de9;
  DT_FIXEDARRAY<DT_INT, 3> unk_fb475a3;
  DT_FIXEDARRAY<DT_INT, 5> unk_2ae7938;
  DT_FIXEDARRAY<DT_INT, 3> unk_afbfb6b;
  DT_FLOAT unk_cf174d8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
