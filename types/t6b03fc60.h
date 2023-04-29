/**
 * Definition: t6b03fc60
 * Hash: 6b03fc60
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6b03fc60 : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;
  DT_VECTOR2D tValue;
  DT_ENUM<DT_INT> unk_6ca113c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
