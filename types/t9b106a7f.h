/**
 * Definition: t9b106a7f
 * Hash: 9b106a7f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9b106a7f : public ComplexRead {
  DT_UINT unk_461add4;
  DT_VARIABLEARRAY<DT_UINT> unk_281e410;
  DT_VARIABLEARRAY<DT_UINT> unk_a5974b1;
  DT_VARIABLEARRAY<DT_UINT> unk_cd5f1f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
