/**
 * Definition: td0d18d91
 * Hash: d0d18d91
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td0d18d91 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uHeroId;
  DT_CHARARRAY<12> szHeroName;
  DT_SNO<SnoGroup::PlayerClass> snoClass;
  DT_INT nLevel;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
