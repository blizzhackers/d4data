/**
 * Definition: t2d6b1819
 * Hash: 2d6b1819
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t2d6b1819 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT unk_74867e8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
