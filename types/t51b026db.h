/**
 * Definition: t51b026db
 * Hash: 51b026db
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t51b026db : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_ACD_NETWORK_NAME unk_a485b85;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
