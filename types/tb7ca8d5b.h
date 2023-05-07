/**
 * Definition: tb7ca8d5b
 * Hash: b7ca8d5b
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tb7ca8d5b : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_INT bEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
