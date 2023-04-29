/**
 * Definition: t349ba61e
 * Hash: 349ba61e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t349ba61e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_CHARARRAY<49> unk_b88123b;
  DT_CHARARRAY<49> unk_f1dc826;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
