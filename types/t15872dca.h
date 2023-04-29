/**
 * Definition: t15872dca
 * Hash: 15872dca
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t15872dca : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
