/**
 * Definition: td4b6d830
 * Hash: d4b6d830
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td4b6d830 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_ENUM<DT_INT> unk_41f8768;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
