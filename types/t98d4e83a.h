/**
 * Definition: t98d4e83a
 * Hash: 98d4e83a
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct t98d4e83a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  DT_TAGMAP<DT_INT> unk_ff11bff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
