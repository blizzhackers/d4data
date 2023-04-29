/**
 * Definition: tb14ea0b3
 * Hash: b14ea0b3
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb14ea0b3 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> unk_b4ca56;
  DT_ENUM<DT_INT> unk_a3f2e4b;
  DT_SNO<SnoGroup::Power> unk_8c91f6f;
  DT_SNO<SnoGroup::Power> unk_f2a9aef;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
