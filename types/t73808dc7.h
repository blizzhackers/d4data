/**
 * Definition: t73808dc7
 * Hash: 73808dc7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t73808dc7 : public ComplexRead {
  DT_UINT unk_cf3ee;
  DT_UINT dwRank;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
