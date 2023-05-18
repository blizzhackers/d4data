/**
 * Definition: UITutorialStyle
 * Hash: a8502503
 */

#pragma once

#include "../types.h"
#include "UIControlConsoleInput.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct UITutorialStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  UIControlConsoleInput tConsoleInput;
  DT_TAGMAP<DT_INT> unk_b4f614c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
