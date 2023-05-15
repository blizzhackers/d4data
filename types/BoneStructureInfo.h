/**
 * Definition: BoneStructureInfo
 * Hash: 2ffe9f61
 */

#pragma once

#include "../types.h"
#include "AppBone.h"

#pragma push(pack, 1)

struct BoneStructureInfo : public ComplexRead {
  AppBone tBoneName;
  AppBone tParentBoneName;
  DT_INT unk_2e1e27;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
