/**
 * Definition: tcb3fe69d
 * Hash: cb3fe69d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcb3fe69d : public ComplexRead {
  DT_INT fAlphaBlendEnable;
  DT_ENUM<DT_INT> eBlendOp;
  DT_ENUM<DT_INT> eSrcBlendFactor;
  DT_ENUM<DT_INT> eDestBlendFactor;
  DT_INT unk_102510d;
  DT_ENUM<DT_INT> unk_d04248f;
  DT_ENUM<DT_INT> unk_d05eb97;
  DT_ENUM<DT_INT> unk_4011abf;
  DT_INT unk_9920e8a;
  DT_INT unk_f1d0b5f;
  DT_INT unk_a5c387a;
  DT_INT unk_968db19;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
