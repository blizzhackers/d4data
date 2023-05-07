/**
 * Definition: t96f079c
 * Hash: 96f079c
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t96f079c : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_CHARARRAY<64> unk_d01a9ae;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
