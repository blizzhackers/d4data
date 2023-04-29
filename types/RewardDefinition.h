/**
 * Definition: RewardDefinition
 * Hash: 9bb1ffee
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct RewardDefinition : public ComplexRead {
  DT_UINT uID;
  DT_ENUM<DT_INT> tType;
  DT_UINT uFlags;
  DT_ENUM<DT_INT> tCurrency;
  DT_UINT uQuantity;
  DT_SNO<SnoGroup::Item> snoItem;
  DT_SNO<SnoGroup::PlayerTitle> snoPlayerTitle;
  DT_SNO<SnoGroup::StoreProduct> snoStoreProduct;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
