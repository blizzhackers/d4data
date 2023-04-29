/**
 * Definition: t7ab1e0b4
 * Hash: 7ab1e0b4
 */

#pragma once

#include "../types.h"
#include "UIControlHandle.h"
#include "t1de9164f.h"

#pragma push(pack, 1)

struct t7ab1e0b4 : public ComplexRead {
  DT_ENUM<DT_INT> unk_c6b1a9b;
  DT_SNO<SnoGroup::Animation2D> unk_7ad962d;
  DT_SNO<SnoGroup::Animation2D> unk_e6e5019;
  DT_INT unk_62dd471;
  DT_INT unk_8aa16e;
  t1de9164f tMargins;
  UIControlHandle unk_4ce228f;
  DT_INT unk_3cdcaea;
  DT_CSTRING unk_ccb7997;
  DT_ENUM<DT_INT> unk_53e61d6;
  DT_FLOAT unk_26fb7aa;
  DT_ENUM<DT_INT> unk_991ae81;
  DT_FLOAT unk_ba769f2;
  DT_ENUM<DT_INT> unk_7111989;
  DT_INT unk_784f6fe;
  DT_INT unk_1e24eb1;
  DT_INT nPageIncrement;
  DT_INT unk_f28083a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
