/**
 * Definition: CurrencyModifiedMessage
 * Hash: 7aa9b471
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct CurrencyModifiedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT bPlayEffects;
  DT_INT64 nAmount;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_ENUM<DT_INT> eReason;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
