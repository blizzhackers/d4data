/**
 * Definition: t79c2454
 * Hash: 79c2454
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "t653f75b6.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct t79c2454 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  t653f75b6 tFont;
  DT_TAGMAP<DT_INT> unk_4741819;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
