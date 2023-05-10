/**
 * Definition: ScriptEventParamReputation
 * Hash: 208cc2d3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ScriptEventParamReputation : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Reputation> snoReputation;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
