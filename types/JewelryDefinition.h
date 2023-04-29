/**
 * Definition: JewelryDefinition
 * Hash: a0d1150b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct JewelryDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eClassRestriction;
  DT_UINT unk_305622d;
  DT_INT unk_59b49ef;
  DT_UINT unk_fbabaf4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
