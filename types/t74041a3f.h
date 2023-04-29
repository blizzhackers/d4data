/**
 * Definition: t74041a3f
 * Hash: 74041a3f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t74041a3f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
