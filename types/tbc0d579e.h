/**
 * Definition: tbc0d579e
 * Hash: bc0d579e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbc0d579e : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_UINT unk_87704fc;
  DT_ENUM<DT_INT> unk_efeb206;
  DT_VARIABLEARRAY<DT_UINT> unk_da48774;
  DT_VARIABLEARRAY<DT_UINT> unk_c69f784;
  DT_INT unk_b9d90d5;
  DT_INT unk_d661bef;
  DT_INT unk_1ec53df;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
