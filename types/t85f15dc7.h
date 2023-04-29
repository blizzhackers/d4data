/**
 * Definition: t85f15dc7
 * Hash: 85f15dc7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t85f15dc7 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT dwRank;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
