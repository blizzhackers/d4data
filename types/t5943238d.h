/**
 * Definition: t5943238d
 * Hash: 5943238d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5943238d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_362349d;
  DT_UINT nPadding;
  DT_UINT unk_f265759;
  DT_UINT unk_4600a2c;
  DT_UINT unk_4b5cdbd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
