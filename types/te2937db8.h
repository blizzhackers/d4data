/**
 * Definition: te2937db8
 * Hash: e2937db8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te2937db8 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
