/**
 * Definition: VibrationDefinition
 * Hash: 49107e57
 */

#pragma once

#include "../types.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct VibrationDefinition : public ComplexRead {
  DT_UINT dwFlags;
  DT_FLOAT tSystemDuration;
  DT_FLOAT tOutroDuration;
  DT_FLOAT wdMinRange;
  DT_FLOAT wdMaxRange;
  DT_FLOAT flPriority;
  DT_INT unk_b7a52c1;
  tcbfdd2ea unk_d131223;
  tcbfdd2ea unk_7bb3b91;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
