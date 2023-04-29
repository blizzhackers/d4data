/**
 * Definition: t38ae08f0
 * Hash: 38ae08f0
 */

#pragma once

#include "../types.h"
#include "tdf741cd1.h"

#pragma push(pack, 1)

struct t38ae08f0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY ptCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
