/**
 * Definition: tfeb5d551
 * Hash: feb5d551
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tfeb5d551 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT bOverridePosition;
  DT_VECTOR2D vecPosition;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
