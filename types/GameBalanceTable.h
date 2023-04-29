/**
 * Definition: GameBalanceTable
 * Hash: 4ef1608
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct GameBalanceTable : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
