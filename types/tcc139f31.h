/**
 * Definition: tcc139f31
 * Hash: cc139f31
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tcc139f31 : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_27d90d9;
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_9a015a0;
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_5611760;
  DT_FIXEDARRAY<DT_FLOAT, 20> unk_2a283cc;
  DT_FLOAT unk_5c74a81;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
