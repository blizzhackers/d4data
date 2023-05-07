/**
 * Definition: t5e641340
 * Hash: 5e641340
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5e641340 : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_c874a5e;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_289ce5b;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_4c6f9cb;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_35f98b0;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_9b6930e;
  DT_FLOAT unk_adb2ad0;
  DT_FLOAT unk_2982e8d;
  DT_FLOAT unk_3167e4b;
  DT_FLOAT fRollSpeed;
  DT_FLOAT unk_a31c055;
  DT_FLOAT unk_d58a0e0;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
