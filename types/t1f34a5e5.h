/**
 * Definition: t1f34a5e5
 * Hash: 1f34a5e5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1f34a5e5 : public ComplexRead {
  DT_UINT unk_461add4;
  DT_VARIABLEARRAY<DT_UINT> unk_cd5f1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
