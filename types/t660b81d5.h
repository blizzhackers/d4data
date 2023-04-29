/**
 * Definition: t660b81d5
 * Hash: 660b81d5
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"

#pragma push(pack, 1)

struct t660b81d5 : public ComplexRead {
  DT_SNO<SnoGroup::Animation2D> unk_4d5b938;
  DT_CSTRING szOnChange;
  DT_INT bIMEDisabled;
  DT_INT bNumbersOnly;
  DT_INT unk_1790e11;
  DT_CSTRING szOnReturnEndEdit;
  DT_CSTRING szOnGainedFocus;
  DT_CSTRING szOnLostFocus;
  StringLabelHandleEx unk_a9baaf6;
  DT_RGBACOLOR unk_d60a445;
  DT_RGBACOLOR unk_d57dba5;
  DT_INT unk_68feeeb;
  DT_CSTRING unk_a4c0376;
  StringLabelHandleEx unk_5b06d35;
  DT_INT unk_6877801;
  DT_INT nNumDecimalPlaces;
  DT_INT bAcceptsReturn;
  DT_INT unk_75dc498;
  StringLabelHandleEx unk_16b847e;
  StringLabelHandleEx unk_6240b01;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
