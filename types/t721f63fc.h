/**
 * Definition: t721f63fc
 * Hash: 721f63fc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t721f63fc : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT nSlot;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
