/**
 * Definition: t300a1e1b
 * Hash: 300a1e1b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t300a1e1b : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;
  DT_FLOAT unk_b8abd18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
