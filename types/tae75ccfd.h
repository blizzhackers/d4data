/**
 * Definition: tae75ccfd
 * Hash: ae75ccfd
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tae75ccfd : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  StringLabelHandleEx unk_77f81b0;
  DT_SNO<SnoGroup::UI> unk_1af83a1;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
