/**
 * Definition: t4e18d451
 * Hash: 4e18d451
 */

#pragma once

#include "../types.h"
#include "LookLink.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t4e18d451 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwActorID;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  LookLink tLookLink;
  DT_INT unk_279aa5a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
