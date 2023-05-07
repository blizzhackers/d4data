/**
 * Definition: t18ca0295
 * Hash: 18ca0295
 */

#pragma once

#include "../types.h"
#include "UIMargins.h"

#pragma push(pack, 1)

struct t18ca0295 : public ComplexRead {
  DT_INT bReverseOrder;
  DT_INT bHorizontal;
  DT_INT unk_f89660f;
  DT_INT unk_3385ab6;
  DT_INT unk_3a57c53;
  DT_INT nStackSpacing;
  DT_ENUM<DT_INT> unk_e1c6bf3;
  UIMargins tMargins;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
