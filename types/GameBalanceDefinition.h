/**
 * Definition: GameBalanceDefinition
 * Hash: 4e834e29
 */

#pragma once

#include "../types.h"
#include "GameBalanceTable.h"

#pragma push(pack, 1)

struct GameBalanceDefinition : public ComplexRead {
  DT_ENUM<DT_INT> eGameBalanceType;
  DT_INT bIgnoreOnLoad;
  DT_POLYMORPHIC_VARIABLEARRAY ptData;
  DT_INT64 ptPostprocessed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
