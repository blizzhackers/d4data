/**
 * Definition: NotLogicSubcondition
 * Hash: 38ae08f0
 */

#pragma once

#include "../types.h"
#include "Subcondition.h"

#pragma push(pack, 1)

struct NotLogicSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY ptCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
