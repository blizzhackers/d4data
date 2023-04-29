/**
 * Definition: t42dac75f
 * Hash: 42dac75f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t42dac75f : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;
  DT_FLOAT flSeconds;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
