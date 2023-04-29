/**
 * Definition: t35789a1c
 * Hash: 35789a1c
 */

#pragma once

#include "../types.h"
#include "tb1cccfae.h"
#include "tba2327fc.h"

#pragma push(pack, 1)

struct t35789a1c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_CSTRING unk_5a84245;
  DT_FIXEDARRAY<tb1cccfae, 5> unk_b77ac70;
  DT_FIXEDARRAY<DT_INT, 6> unk_83a373;
  DT_FIXEDARRAY<DT_INT, 5> unk_2d36569;
  DT_FIXEDARRAY<DT_UINT, 2> unk_3a0e4a2;
  DT_FIXEDARRAY<DT_UINT, 7> unk_7f27ec0;
  DT_VARIABLEARRAY<tba2327fc> unk_980ba0f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
