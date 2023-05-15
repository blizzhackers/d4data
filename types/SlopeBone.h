/**
 * Definition: SlopeBone
 * Hash: dd2a5307
 */

#pragma once

#include "../types.h"
#include "AppBone.h"

#pragma push(pack, 1)

struct SlopeBone : public ComplexRead {
  AppBone tBoneName;
  DT_FLOAT aPitchMin;
  DT_FLOAT aPitchMax;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
