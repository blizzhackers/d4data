/**
 * Definition: te2304c7a
 * Hash: e2304c7a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct te2304c7a : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_7e00c4d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
