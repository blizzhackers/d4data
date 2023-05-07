/**
 * Definition: td25b948e
 * Hash: d25b948e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td25b948e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;
  DT_FLOAT flDistanceThreshold;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
