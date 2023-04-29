/**
 * Definition: t220eeabc
 * Hash: 220eeabc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t220eeabc : public ComplexRead {
  DT_FLOAT unk_96bd281;
  DT_FLOAT unk_96bd183;
  DT_FIXEDARRAY<DT_RGBACOLOR, 7> unk_b29fdae;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
