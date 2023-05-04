/**
 * Definition: LevelScalingData
 * Hash: 8874f713
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct LevelScalingData : public ComplexRead {
  DT_INT unk_84e566b;
  DT_INT unk_c2f6938;
  DT_INT unk_49895f1;
  DT_INT unk_84e556d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
