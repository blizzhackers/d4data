/**
 * Definition: t6808914a
 * Hash: 6808914a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6808914a : public ComplexRead {
  DT_INT unk_ec6554;
  DT_FLOAT unk_6d4e26a;
  DT_FLOAT unk_590df7d;
  DT_FLOAT unk_b896e67;
  DT_FLOAT unk_597ad5d;
  DT_FLOAT unk_3c03ad2;
  DT_FLOAT unk_8649f82;
  DT_FLOAT unk_d89162c;
  DT_FLOAT unk_32d45f9;
  DT_FLOAT unk_4c5591b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
