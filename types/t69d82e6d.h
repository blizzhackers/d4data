/**
 * Definition: t69d82e6d
 * Hash: 69d82e6d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t69d82e6d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT nMinimum;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
