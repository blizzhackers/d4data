/**
 * Definition: t1109bb04
 * Hash: 1109bb04
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1109bb04 : public ComplexRead {
  DT_UINT unk_461add4;
  DT_VARIABLEARRAY<DT_UINT> unk_a5974b1;
  DT_VARIABLEARRAY<DT_UINT> unk_cd5f1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
