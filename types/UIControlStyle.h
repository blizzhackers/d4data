/**
 * Definition: UIControlStyle
 * Hash: e1c5710
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct UIControlStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
