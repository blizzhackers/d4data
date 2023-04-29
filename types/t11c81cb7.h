/**
 * Definition: t11c81cb7
 * Hash: 11c81cb7
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t11c81cb7 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_INT64 nKey;
  DT_INT nIntValue;
  DT_FLOAT flFloatValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
