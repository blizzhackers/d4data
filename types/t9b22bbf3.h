/**
 * Definition: t9b22bbf3
 * Hash: 9b22bbf3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9b22bbf3 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_VARIABLEARRAY<DT_ENUM<DT_INT>> unk_8d0003e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
