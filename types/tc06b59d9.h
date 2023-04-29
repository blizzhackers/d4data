/**
 * Definition: tc06b59d9
 * Hash: c06b59d9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc06b59d9 : public ComplexRead {
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_a60e772;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_143d2e7;
  DT_FIXEDARRAY<DT_FLOAT, 10> unk_9aba5bf;
  DT_FLOAT unk_92ab59f;
  DT_FLOAT fTwitch;
  DT_FLOAT unk_a9ca82f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
