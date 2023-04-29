/**
 * Definition: t73b258aa
 * Hash: 73b258aa
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t73b258aa : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<37> unk_13bbc12;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
