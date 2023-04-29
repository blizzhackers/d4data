/**
 * Definition: ta33c7df4
 * Hash: a33c7df4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta33c7df4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ParagonGlyph> snoGlyph;
  DT_UINT dwNodeIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
