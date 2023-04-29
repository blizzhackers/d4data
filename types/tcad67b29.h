/**
 * Definition: tcad67b29
 * Hash: cad67b29
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct tcad67b29 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_ddfb7d6;
  DT_UINT unk_ff59d1d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
