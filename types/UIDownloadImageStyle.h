/**
 * Definition: UIDownloadImageStyle
 * Hash: 341c418a
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "tb8237382.h"

#pragma push(pack, 1)

struct UIDownloadImageStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  tb8237382 tConsoleInput;
  DT_TAGMAP<DT_INT> unk_b4f614c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
