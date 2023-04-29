/**
 * Definition: t6c0b8317
 * Hash: 6c0b8317
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6c0b8317 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ParagonGlyph> unk_eeaddc2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
