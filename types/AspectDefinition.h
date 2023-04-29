/**
 * Definition: AspectDefinition
 * Hash: d055ea89
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AspectDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Affix> snoAffix;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
