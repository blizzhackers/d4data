/**
 * Definition: t4438eb88
 * Hash: 4438eb88
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t4438eb88 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_SNO<SnoGroup::Ui> snoUI;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
