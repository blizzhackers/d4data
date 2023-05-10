/**
 * Definition: PowerConditionHasBuff
 * Hash: 98411c93
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PowerConditionHasBuff : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_86c2785;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
