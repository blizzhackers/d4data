/**
 * Definition: t5e32bd3e
 * Hash: 5e32bd3e
 */

#pragma once

#include "../types.h"
#include "t1d0f43e.h"
#include "tdf12c188.h"

#pragma push(pack, 1)

struct t5e32bd3e : public ComplexRead {
  tdf12c188 tCondition;
  DT_INT unk_dd101c8;
  t1d0f43e unk_6f68ae7;
  DT_FLOAT unk_ce3c7b4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
