/**
 * Definition: ConditionWrapper
 * Hash: df12c188
 */

#pragma once

#include "../types.h"
#include "Subcondition.h"

#pragma push(pack, 1)

struct ConditionWrapper : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoCondition;
  DT_POLYMORPHIC_VARIABLEARRAY ptInlineCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
