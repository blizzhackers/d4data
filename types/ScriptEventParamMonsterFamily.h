/**
 * Definition: ScriptEventParamMonsterFamily
 * Hash: 5e2b5512
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamMonsterFamily : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::MonsterFamily> snoMonsterFamily;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
