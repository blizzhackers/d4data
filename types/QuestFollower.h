/**
 * Definition: QuestFollower
 * Hash: b150855c
 */

#pragma once

#include "../types.h"
#include "tbc83f219.h"
#include "tda8a2315.h"

#pragma push(pack, 1)

struct QuestFollower : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoActor;
  tda8a2315 unk_74ee52d;
  DT_VARIABLEARRAY<tbc83f219> arPhases;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
