/**
 * Definition: ConditionData
 * Hash: 53b76221
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct ConditionData : public ComplexRead {
  DT_SNO<SnoGroup::Condition> snoCondition;
  StringLabelHandleEx unk_5d7a334;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
