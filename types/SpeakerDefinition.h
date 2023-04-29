/**
 * Definition: SpeakerDefinition
 * Hash: 77784d74
 */

#pragma once

#include "../types.h"
#include "TestDefinitionMusic.h"

#pragma push(pack, 1)

struct SpeakerDefinition : public ComplexRead {
  DT_INT unk_ca1a658;
  DT_VARIABLEARRAY<TestDefinitionMusic> unk_8c41fbd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
