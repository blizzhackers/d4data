/**
 * Definition: ReverbDefinition
 * Hash: 933481cf
 */

#pragma once

#include "../types.h"
#include "TestDefinitionMusic.h"
#include "t1d0f43e.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct ReverbDefinition : public ComplexRead {
  tf18a2f0 unk_18b010c;
  DT_FLOAT unk_836cb29;
  DT_VARIABLEARRAY<t1d0f43e> unk_91c65f5;
  DT_VARIABLEARRAY<t1d0f43e> unk_3b3f006;
  DT_VARIABLEARRAY<TestDefinitionMusic> unk_6e07592;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
