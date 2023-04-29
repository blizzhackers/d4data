/**
 * Definition: te916d732
 * Hash: e916d732
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct te916d732 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_e08c2ce;
  DT_ACD_NETWORK_NAME unk_a48947e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
