/**
 * Definition: td774a564
 * Hash: d774a564
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td774a564 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;
  DT_FLOAT flDistance;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
