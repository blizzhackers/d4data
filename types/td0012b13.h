/**
 * Definition: td0012b13
 * Hash: d0012b13
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct td0012b13 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_ENUM<DT_INT> unk_70ccb7e;
  DT_VECTOR3D unk_f294e79;
  DT_POLYMORPHIC_VARIABLEARRAY arKeys;
  DT_FLOAT unk_9717a7e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
