/**
 * Definition: t34ef6b9c
 * Hash: 34ef6b9c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t34ef6b9c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annItem;
  DT_ACD_NETWORK_NAME unk_af3bfcb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
