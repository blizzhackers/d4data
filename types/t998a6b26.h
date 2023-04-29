/**
 * Definition: t998a6b26
 * Hash: 998a6b26
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t998a6b26 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_FLOAT flRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
