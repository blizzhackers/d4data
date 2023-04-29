/**
 * Definition: td27788a9
 * Hash: d27788a9
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"
#include "tf5ac91bb.h"

#pragma push(pack, 1)

struct td27788a9 : public ComplexRead {
  t72bd65f8 tHeader;
  tf5ac91bb tItemId;
  DT_ENUM<DT_INT> eCurrencyType;
  DT_INT64 nCurrencyAmount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
