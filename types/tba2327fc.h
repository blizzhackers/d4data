/**
 * Definition: tba2327fc
 * Hash: ba2327fc
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tba2327fc : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Quest>> arQuests;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
