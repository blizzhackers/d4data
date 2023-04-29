/**
 * Definition: te6d2565e
 * Hash: e6d2565e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te6d2565e : public ComplexRead {
  DT_INT unk_c5f0201;
  DT_INT nID;
  DT_ENUM<DT_INT> eType;
  DT_SNO<SnoGroup::MarkerSet> unk_b9550a0;
  DT_INT unk_5393220;
  DT_CSTRING szName;
  DT_INT unk_c7bd9ba;
  DT_INT unk_5310d2c;
  DT_INT unk_6c691d4;
  DT_INT unk_cd2d0c6;
  DT_INT unk_75f54c9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
