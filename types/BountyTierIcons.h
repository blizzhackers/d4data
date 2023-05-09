/**
 * Definition: BountyTierIcons
 * Hash: fd221bd1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct BountyTierIcons : public ComplexRead {
  DT_UINT unk_44213a;
  DT_UINT hIconNormal;
  DT_UINT hIconDisabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
