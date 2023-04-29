/**
 * Definition: tcc8c5070
 * Hash: cc8c5070
 */

#pragma once

#include "../types.h"
#include "ScriptedAchievementEvent.h"

#pragma push(pack, 1)

struct tcc8c5070 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<ScriptedAchievementEvent> tEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
