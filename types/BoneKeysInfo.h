/**
 * Definition: BoneKeysInfo
 * Hash: dc22110c
 */

#pragma once

#include "../types.h"
#include "BoneKeyInfo.h"

#pragma push(pack, 1)

struct BoneKeysInfo : public ComplexRead {
  DT_VARIABLEARRAY<BoneKeyInfo> unk_e61eac4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
