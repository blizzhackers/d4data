/**
 * Definition: t5c24b1a8
 * Hash: 5c24b1a8
 */

#pragma once

#include "../types.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t5c24b1a8 : public ComplexRead {
  DT_INT unk_d197453;
  DT_INT unk_d04c24c;
  DT_ENUM<DT_INT> eButtonIconAlignment;
  DT_INT unk_2835907;
  DT_FLOAT unk_57295f6;
  DT_FLOAT unk_57295f7;
  t6b1c5d9c unk_2330cbf;
  t6b1c5d9c unk_a2c2344;
  t6b1c5d9c unk_56f24f5;
  t6b1c5d9c unk_5a90f13;
  DT_INT unk_fca1727;
  DT_FLOAT fLeft;
  DT_FLOAT fTop;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
