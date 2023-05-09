/**
 * Definition: t43385d9b
 * Hash: 43385d9b
 */

#pragma once

#include "../types.h"
#include "BoneStructureInfo.h"

#pragma push(pack, 1)

struct t43385d9b : public ComplexRead {
  DT_VARIABLEARRAY<BoneStructureInfo> unk_192d2c5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
