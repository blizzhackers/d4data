/**
 * Definition: tbc83f219
 * Hash: bc83f219
 */

#pragma once

#include "../types.h"
#include "tda8a2315.h"

#pragma push(pack, 1)

struct tbc83f219 : public ComplexRead {
  DT_UINT dwPhase;
  tda8a2315 unk_74ee52d;
  DT_SNO<SnoGroup::Condition> unk_c49c579;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> arLevelAreas;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
