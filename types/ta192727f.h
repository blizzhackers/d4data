/**
 * Definition: ta192727f
 * Hash: a192727f
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta192727f : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_70bf7e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
