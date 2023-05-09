/**
 * Definition: SurfaceWorldConstraints
 * Hash: 7fdf4029
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SurfaceWorldConstraints : public ComplexRead {
  DT_UINT dwType;
  DT_UINT unk_2de4987;
  DT_POLYMORPHIC_VARIABLEARRAY arConditions;
  DT_INT bEnd;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
