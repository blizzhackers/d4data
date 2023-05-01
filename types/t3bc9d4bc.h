/**
 * Definition: t3bc9d4bc
 * Hash: 3bc9d4bc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t3bc9d4bc : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_CHARARRAY<49> vRHeroName;
  DT_ENUM<DT_INT> eClass;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
