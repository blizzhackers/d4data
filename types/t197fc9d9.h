/**
 * Definition: t197fc9d9
 * Hash: 197fc9d9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t197fc9d9 : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoSkill;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
