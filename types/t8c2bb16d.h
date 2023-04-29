/**
 * Definition: t8c2bb16d
 * Hash: 8c2bb16d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8c2bb16d : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoSkill;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
