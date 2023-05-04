/**
 * Definition: td27e269a
 * Hash: d27e269a
 */

#pragma once

#include "../types.h"
#include "DungeonList.h"
#include "t7247d2c9.h"

#pragma push(pack, 1)

struct td27e269a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FIXEDARRAY<DungeonList, 2> unk_6f325d2;
  DT_VARIABLEARRAY<t7247d2c9> unk_6ccc3cf;
  DT_FLOAT unk_6b198fe;
  DT_UINT unk_2da258;
  DT_FLOAT unk_74b00e3;
  DT_FLOAT unk_aa2399c;
  DT_FLOAT unk_855d467;
  DT_RANGE<DT_INT> unk_908474b;
  DT_RANGE<DT_INT> unk_408865c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
