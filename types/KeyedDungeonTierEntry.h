/**
 * Definition: KeyedDungeonTierEntry
 * Hash: dd48bb68
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct KeyedDungeonTierEntry : public ComplexRead {
  DT_INT nMonsterLevel;
  DT_FLOAT unk_a089b1c;
  DT_FLOAT unk_171d567;
  DT_FLOAT flHPScalar;
  DT_FLOAT flDamageScalar;
  DT_INT unk_435a301;
  DT_INT unk_ad8335e;
  DT_INT unk_2db9e3b;
  DT_INT unk_838537c;
  DT_INT unk_d9508bd;
  DT_INT unk_e2720f2;
  DT_INT unk_1129ada;
  DT_INT nXPReward;
  DT_INT nGoldReward;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
