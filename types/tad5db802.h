/**
 * Definition: tad5db802
 * Hash: ad5db802
 */

#pragma once

#include "../types.h"
#include "Currency.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tad5db802 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_OPTIONAL<DT_INT> uGameAccountId;
  DT_OPTIONAL<DT_INT> unk_d322812;
  DT_OPTIONAL<DT_INT> annItem;
  DT_OPTIONAL<DT_INT> currency;
  DT_OPTIONAL<DT_INT> quantity;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
