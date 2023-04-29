/**
 * Definition: t5290186d
 * Hash: 5290186d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t5290186d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT unk_2883a68;
  DT_ACD_NETWORK_NAME annItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
