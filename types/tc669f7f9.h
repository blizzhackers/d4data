/**
 * Definition: tc669f7f9
 * Hash: c669f7f9
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "tb8237382.h"
#include "tf675b103.h"

#pragma push(pack, 1)

struct tc669f7f9 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle unk_5770323;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 unk_582a697;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  tf675b103 unk_10b0379;
  DT_TAGMAP<DT_INT> unk_a229fbe;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
