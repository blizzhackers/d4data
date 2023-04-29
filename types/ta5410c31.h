/**
 * Definition: ta5410c31
 * Hash: a5410c31
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ta5410c31 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_606dae5;
  DT_CHARARRAY<32> bonus;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
