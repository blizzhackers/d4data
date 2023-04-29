/**
 * Definition: tbc26b221
 * Hash: bc26b221
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tbc26b221 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_85269a4;
  DT_UINT dwObjectID;
  DT_POLYMORPHIC_VARIABLEARRAY arKeys;
  DT_FLOAT unk_9717a7e;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
