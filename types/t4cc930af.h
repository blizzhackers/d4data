/**
 * Definition: t4cc930af
 * Hash: 4cc930af
 */

#pragma once

#include "../types.h"
#include "ConstraintLink.h"
#include "HardpointLink.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t4cc930af : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  ConstraintLink tConstraintLink;
  HardpointLink tHardpointLink;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
