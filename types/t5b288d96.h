/**
 * Definition: t5b288d96
 * Hash: 5b288d96
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t5b288d96 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_INT bEnabled;
  DT_INT64 unk_526a589;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
