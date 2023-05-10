/**
 * Definition: ScriptEventParamSecondaryGroup
 * Hash: 70b1b85d
 */

#pragma once

#include "../types.h"
#include "ActorGroup.h"

#pragma push(pack, 1)

struct ScriptEventParamSecondaryGroup : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  ActorGroup tSecondaryGroup;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
