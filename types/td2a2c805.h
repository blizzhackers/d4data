/**
 * Definition: td2a2c805
 * Hash: d2a2c805
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td2a2c805 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_INT bEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
