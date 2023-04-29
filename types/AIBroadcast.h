/**
 * Definition: AIBroadcast
 * Hash: 8b019add
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AIBroadcast : public ComplexRead {
  DT_SNO<SnoGroup::AiState> snoAIState;
  DT_FLOAT flRadius;
  DT_SNO<SnoGroup::Condition> snoCondition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
