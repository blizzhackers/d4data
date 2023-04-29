/**
 * Definition: t97ec6167
 * Hash: 97ec6167
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t97ec6167 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::DemonScroll> snoScroll;
  DT_INT unk_14e1214;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
