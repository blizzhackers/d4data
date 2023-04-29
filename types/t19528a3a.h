/**
 * Definition: t19528a3a
 * Hash: 19528a3a
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "t653f75b6.h"
#include "t6540e7e8.h"
#include "t98c23c41.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct t19528a3a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  t653f75b6 tFont;
  DT_TAGMAP<DT_INT> unk_4741819;
  t6540e7e8 tIcon;
  t98c23c41 unk_4cce0b6;
  DT_TAGMAP<DT_INT> unk_10f81f0;
  DT_TAGMAP<DT_INT> unk_d3a1ebf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
