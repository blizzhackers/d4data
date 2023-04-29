/**
 * Definition: ta421b9d5
 * Hash: a421b9d5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta421b9d5 : public ComplexRead {
  DT_FIXEDARRAY<DT_UINT, 4> unk_4fa6b4f;
  DT_SNO<SnoGroup::NpcComponentSet> unk_7f2f11f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
