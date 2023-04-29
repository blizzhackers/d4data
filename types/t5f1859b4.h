/**
 * Definition: t5f1859b4
 * Hash: 5f1859b4
 */

#pragma once

#include "../types.h"
#include "AABB.h"

#pragma push(pack, 1)

struct t5f1859b4 : public ComplexRead {
  DT_INT64 unk_7339eb9;
  DT_INT64 unk_179f850;
  DT_FIXEDARRAY<DT_INT64, 4608> unk_39da905;
  DT_FIXEDARRAY<DT_INT64, 4608> unk_6897d68;
  DT_INT64 unk_f18728c;
  DT_BYTE unk_a2d413a;
  AABB unk_cd14700;
  AABB unk_215e5a4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
