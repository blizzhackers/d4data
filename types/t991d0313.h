/**
 * Definition: t991d0313
 * Hash: 991d0313
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t991d0313 : public ComplexRead {
  DT_ENUM<DT_INT> eScrollbarStyle;
  DT_INT unk_730e7a0;
  DT_INT unk_5360c2;
  DT_CSTRING unk_bdf8b74;
  DT_SNO<SnoGroup::Sound> unk_3f3a302;
  DT_ENUM<DT_INT> eScrollbarVisibility;
  DT_FLOAT unk_58496c;
  DT_FLOAT unk_26fb7aa;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_FLOAT unk_ce2abaa;
  DT_INT unk_aea1165;
  DT_FLOAT unk_b66eab7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
