/**
 * Definition: t8d639c63
 * Hash: 8d639c63
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t8d639c63 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_SNO<SnoGroup::UI> snoUI;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
