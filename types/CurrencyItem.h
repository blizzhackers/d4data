/**
 * Definition: CurrencyItem
 * Hash: a8549fba
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct CurrencyItem : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT64 unk_c5b5acd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
