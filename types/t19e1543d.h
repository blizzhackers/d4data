/**
 * Definition: t19e1543d
 * Hash: 19e1543d
 */

#pragma once

#include "../types.h"
#include "CrafterConditions.h"
#include "t59c87ced.h"
#include "t65da5a34.h"
#include "ted531777.h"

#pragma push(pack, 1)

struct t19e1543d : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FIXEDARRAY<t65da5a34, 12> unk_8205294;
  DT_FIXEDARRAY<t59c87ced, 5> arCrafters;
  DT_FIXEDARRAY<CrafterConditions, 5> unk_f37b35d;
  DT_FLOAT unk_13e0ecf;
  ted531777 unk_c834d7a;
  DT_SNO<SnoGroup::Power> unk_24fcd3d;
  DT_FLOAT unk_6ac8078;
  DT_FLOAT unk_2a2b3f7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
