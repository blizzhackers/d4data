/**
 * Definition: ParagonGlyphExperience
 * Hash: 1068f794
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ParagonGlyphExperience : public ComplexRead {
  DT_UINT nDeltaXP;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
