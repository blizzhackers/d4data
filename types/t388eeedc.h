/**
 * Definition: t388eeedc
 * Hash: 388eeedc
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t388eeedc : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_GBID<0x9> gbidHelpCode;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
