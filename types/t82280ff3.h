/**
 * Definition: t82280ff3
 * Hash: 82280ff3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t82280ff3 : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_86c2785;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
