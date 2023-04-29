/**
 * Definition: t7cd30e23
 * Hash: 7cd30e23
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7cd30e23 : public ComplexRead {
  DT_GBID<0x35> unk_8c0de6e;
  DT_SNO<SnoGroup::AnimSet> unk_e1f5441;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
