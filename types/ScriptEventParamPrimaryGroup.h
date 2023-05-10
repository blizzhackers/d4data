/**
 * Definition: ScriptEventParamPrimaryGroup
 * Hash: b7693c39
 */

#pragma once

#include "../types.h"
#include "ActorGroup.h"

#pragma push(pack, 1)

struct ScriptEventParamPrimaryGroup : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  ActorGroup tPrimaryGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
