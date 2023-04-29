/**
 * Definition: te4a22909
 * Hash: e4a22909
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t18173024.h"

#pragma push(pack, 1)

struct te4a22909 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  t18173024 unk_9f03550;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
