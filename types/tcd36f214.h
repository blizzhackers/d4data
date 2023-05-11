/**
 * Definition: tcd36f214
 * Hash: cd36f214
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct tcd36f214 : public ComplexRead {
  DT_FLOAT unk_f331b12;
  DT_FLOAT unk_f331b13;
  DT_FLOAT unk_268ccfa;
  DT_FLOAT unk_268cd02;
  DT_FLOAT unk_268cd00;
  DT_FLOAT unk_268ccf0;
  StringLabelHandleEx hText;
  DT_INT nFontSizeFallback;
  DT_INT unk_ad7d5ca;
  DT_INT unk_748233d;
  DT_ENUM<DT_INT> eTextJustify;
  DT_ENUM<DT_INT> eTextJustifyVertical;
  DT_FLOAT unk_4cfc33f;
  DT_FLOAT unk_103d77a;
  DT_INT unk_f293927;
  DT_INT unk_9bfa5c8;
  DT_INT bWordWrap;
  DT_INT bShrinkToFit;
  DT_ENUM<DT_INT> eResizeToFit;
  DT_INT bHyperlinkAware;
  DT_INT bPassword;
  DT_INT bSelectable;
  DT_INT bUseDropShadow;
  DT_INT unk_c5637af;
  DT_INT unk_9e52c15;
  DT_UINT unk_4a9de9d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
