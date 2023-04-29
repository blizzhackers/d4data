/**
 * Definition: tac4e7ea7
 * Hash: ac4e7ea7
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct tac4e7ea7 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  DT_TAGMAP<DT_INT> unk_c8d49ac;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
