/**
 * Definition: t66739171
 * Hash: 66739171
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t66739171 : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_a1d2e65;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
