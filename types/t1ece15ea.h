/**
 * Definition: t1ece15ea
 * Hash: 1ece15ea
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct t1ece15ea : public ComplexRead {
  GBIDHeader tHeader;
  DT_RANGE<DT_INT> unk_e726cf1;
  DT_RANGE<DT_INT> unk_a1e03a6;
  DT_RANGE<DT_INT> unk_2a8932;
  DT_RANGE<DT_INT> unk_94d0477;
  DT_FLOAT unk_e466a88;
  DT_FLOAT unk_78d1051;
  DT_FLOAT unk_761cd11;
  DT_FLOAT unk_402fe97;
  DT_FLOAT unk_30b0cd2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
