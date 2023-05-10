/**
 * Definition: ScriptEventParamWorld
 * Hash: 4e454f30
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamWorld : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::World> snoWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
