/**
 * Definition: tabd62f10
 * Hash: abd62f10
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tabd62f10 : public ComplexRead {
  DT_INT unk_e2389cd;
  DT_FLOAT unk_712de84;
  DT_FLOAT unk_a7d0d98;
  DT_RANGE<DT_INT> unk_7a0fbd1;
  DT_FLOAT flWanderTooLongTime;
  DT_RANGE<DT_INT> unk_cce11aa;
  DT_FLOAT unk_eef4fcc;
  DT_RANGE<DT_INT> unk_b27a162;
  DT_INT unk_7ba0285;
  DT_RANGE<DT_INT> unk_d8c8fc5;
  DT_INT unk_a7dc284;
  DT_FLOAT unk_dc8566b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
