/**
 * Definition: MonsterFamilyDefinition
 * Hash: 622e41f3
 */

#pragma once

#include "../types.h"
#include "MonsterFamilyArchetype.h"

#pragma push(pack, 1)

struct MonsterFamilyDefinition : public ComplexRead {
  DT_VARIABLEARRAY<MonsterFamilyArchetype> unk_cc6abab;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
