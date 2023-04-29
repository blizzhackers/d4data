/**
 * Definition: t77a79111
 * Hash: 77a79111
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t77a79111 : public ComplexRead {
  DT_FLOAT unk_ca89bd3;
  DT_FLOAT unk_fb082e6;
  DT_UINT unk_eb94539;
  DT_FLOAT unk_bcdffc9;
  DT_FLOAT unk_bb3a1d;
  DT_FLOAT unk_d2b82a2;
  DT_FLOAT unk_fcaf78b;
  DT_FLOAT unk_eb919f7;
  DT_FLOAT unk_ba7b0e0;
  DT_FLOAT unk_5419989;
  DT_ENUM<DT_INT> unk_a5157b7;
  DT_ENUM<DT_INT> unk_34d0352;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
