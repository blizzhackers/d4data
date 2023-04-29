/**
 * Definition: t19b25a8
 * Hash: 19b25a8
 */

#pragma once

#include "../types.h"
#include "tcc5838a.h"

#pragma push(pack, 1)

struct t19b25a8 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> unk_3580552;
  DT_FLOAT unk_a3f1699;
  DT_VARIABLEARRAY<tcc5838a> unk_4a4ab0e;
  DT_FLOAT unk_919e5f8;
  DT_ENUM<DT_INT> eType;
  DT_ENUM<DT_INT> unk_c3535ed;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
