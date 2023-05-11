/**
 * Definition: tc661a6fd
 * Hash: c661a6fd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc661a6fd : public ComplexRead {
  DT_UINT dwID;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::ItemType>> unk_c94355b;
  DT_SNO<SnoGroup::Condition> unk_b76f230;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
