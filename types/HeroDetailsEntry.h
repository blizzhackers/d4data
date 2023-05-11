/**
 * Definition: HeroDetailsEntry
 * Hash: af0abce6
 */

#pragma once

#include "../types.h"
#include "tb0371ad1.h"

#pragma push(pack, 1)

struct HeroDetailsEntry : public ComplexRead {
  DT_UINT dwID;
  DT_ENUM<DT_INT> eCurrency;
  DT_INT unk_6d39fa2;
  DT_VARIABLEARRAY<tb0371ad1> arValues;
  DT_INT unk_6ae314e;
  DT_INT unk_f61d7c3;
  DT_FIXEDARRAY<DT_INT, 5> unk_40ddaae;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
