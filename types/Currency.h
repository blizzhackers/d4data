/**
 * Definition: Currency
 * Hash: 15ccbfab
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Currency : public ComplexRead {
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT64 nCurrencyAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
