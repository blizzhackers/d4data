/**
 * Definition: ScriptEventParamActor
 * Hash: 4cb0a881
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamActor : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Actor> snoActor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
