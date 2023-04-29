/**
 * Definition: t9e555889
 * Hash: 9e555889
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9e555889 : public ComplexRead {
  DT_UINT unk_770f3b7;
  DT_INT unk_b1f8d85;
  DT_INT nDamageState;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
