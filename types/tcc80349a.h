/**
 * Definition: tcc80349a
 * Hash: cc80349a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcc80349a : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT dwRank;
  DT_INT unk_3e3890b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
