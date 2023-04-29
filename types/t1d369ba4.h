/**
 * Definition: t1d369ba4
 * Hash: 1d369ba4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t1d369ba4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT idLevelArea;
  DT_GBID<0x14> gbidType;
  DT_INT unk_2b95c58;
  DT_INT nGroupIndex;
  DT_INT unk_5862894;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
