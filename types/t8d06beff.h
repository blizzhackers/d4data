/**
 * Definition: t8d06beff
 * Hash: 8d06beff
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t8d06beff : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Achievement> snoAchievement;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
