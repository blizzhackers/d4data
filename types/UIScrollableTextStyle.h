/**
 * Definition: UIScrollableTextStyle
 * Hash: 5f6b1477
 */

#pragma once

#include "../types.h"
#include "UIControlFont.h"
#include "UIControlHandle.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct UIScrollableTextStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 tConsoleInput;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  UIControlFont tFont;
  DT_TAGMAP<DT_INT> unk_4741819;
  DT_TAGMAP<DT_INT> hArtificiallyOwnedTagMap;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
