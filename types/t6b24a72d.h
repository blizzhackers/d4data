/**
 * Definition: t6b24a72d
 * Hash: 6b24a72d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6b24a72d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::ItemType> snoItemType;
  DT_INT nNewLevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
