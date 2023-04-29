/**
 * Definition: t9153bc3
 * Hash: 9153bc3
 */

#pragma once

#include "../types.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t9153bc3 : public ComplexRead {
  DT_FLOAT unk_c1195cb;
  DT_FLOAT unk_c1194cd;
  DT_INT bVertical;
  t6b1c5d9c unk_e69457b;
  t6b1c5d9c unk_2eb0960;
  t6b1c5d9c unk_9df1c6f;
  DT_INT unk_e184982;
  DT_FLOAT unk_c58ef7e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
