/**
 * Definition: AnyLogicSubcondition
 * Hash: d044f267
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnyLogicSubcondition : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
