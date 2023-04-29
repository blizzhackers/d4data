/**
 * Definition: ConditionDefinition
 * Hash: ee9a810
 */

#pragma once

#include "../types.h"
#include "tdf741cd1.h"

#pragma push(pack, 1)

struct ConditionDefinition : public ComplexRead {
  DT_POLYMORPHIC_VARIABLEARRAY unk_7e154cf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
