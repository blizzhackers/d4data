/**
 * Definition: t70eaec5a
 * Hash: 70eaec5a
 */

#pragma once

#include "../types.h"
#include "UIControlConsoleInput.h"
#include "UIControlFont.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct t70eaec5a : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  UIControlConsoleInput tConsoleInput;
  DT_TAGMAP<DT_INT> unk_b4f614c;
  UIControlFont tFont;
  DT_TAGMAP<DT_INT> unk_4741819;
  DT_TAGMAP<DT_INT> unk_a88ab5f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
