/**
 * Definition: LabelRuleSet
 * Hash: fe388804
 */

#pragma once

#include "../types.h"
#include "LabelRule.h"

#pragma push(pack, 1)

struct LabelRuleSet : public ComplexRead {
  DT_VARIABLEARRAY<LabelRule> arRules;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
