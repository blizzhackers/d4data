/**
 * Definition: t59399099
 * Hash: 59399099
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t59399099 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ParagonGlyph> snoGlyph;
  DT_UINT unk_6499985;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
