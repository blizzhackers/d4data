/**
 * Definition: t1aa682eb
 * Hash: 1aa682eb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1aa682eb : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT nCurrencyAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
