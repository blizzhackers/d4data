/**
 * Definition: ScriptEventParamMonsterRarity
 * Hash: 7a2bfb8b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamMonsterRarity : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eMonsterRarity;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
