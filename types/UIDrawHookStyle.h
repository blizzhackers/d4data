/**
 * Definition: UIDrawHookStyle
 * Hash: fa73270e
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"

#pragma push(pack, 1)

struct UIDrawHookStyle : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  UIControlHandle hParentStyle;
  DT_INT64 unk_441f783;
  DT_TAGMAP<DT_INT> unk_b835d15;
  DT_TAGMAP<DT_INT> unk_db47553;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
