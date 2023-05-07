/**
 * Definition: t1d4cd957
 * Hash: 1d4cd957
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct t1d4cd957 : public ComplexRead {
  t72bd65f8 tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_INT nBankTab;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT64 nCurrencyAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
