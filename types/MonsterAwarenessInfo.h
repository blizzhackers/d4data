/**
 * Definition: MonsterAwarenessInfo
 * Hash: db7aec9d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MonsterAwarenessInfo : public ComplexRead {
  DT_FLOAT flIdleRadius;
  DT_FLOAT flCombatRadius;
  DT_FLOAT flWarnOthersRadius;
  DT_FLOAT unk_7d4fa2f;
  DT_FLOAT unk_4eeb2ba;
  DT_INT unk_3f45ddd;
  DT_INT unk_d9ecad5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
