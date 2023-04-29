/**
 * Definition: EncounterDefinition
 * Hash: 9252a01c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct EncounterDefinition : public ComplexRead {
  DT_SNO<SnoGroup::Actor> snoSymbol;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
