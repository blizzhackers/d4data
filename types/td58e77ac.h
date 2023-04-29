/**
 * Definition: td58e77ac
 * Hash: d58e77ac
 */

#pragma once

#include "../types.h"
#include "t5c16f8c9.h"

#pragma push(pack, 1)

struct td58e77ac : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_68a1111;
  DT_SNO<SnoGroup::Power> unk_ac3832f;
  DT_GBID<0x17> gbidPetType;
  DT_UINT hIconOverride;
  DT_FIXEDARRAY<t5c16f8c9, 3> unk_f9268e5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
