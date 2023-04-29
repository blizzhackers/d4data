/**
 * Definition: t8bd0a06d
 * Hash: 8bd0a06d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t8bd0a06d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_ad293f5;
  DT_ENUM<DT_INT> unk_f05145d;
  DT_SNO<SnoGroup::World> snoDestination;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
