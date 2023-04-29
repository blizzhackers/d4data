/**
 * Definition: t6c0be96d
 * Hash: 6c0be96d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6c0be96d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::DemonScroll> snoScroll;
  DT_INT unk_2bf0136;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
