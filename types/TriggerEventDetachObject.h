/**
 * Definition: TriggerEventDetachObject
 * Hash: a6f0b816
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"
#include "t29da0a90.h"

#pragma push(pack, 1)

struct TriggerEventDetachObject : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_adbc22e;
  DT_UINT dwActorID;
  DT_UINT dwID;
  DT_INT unk_957fe32;
  t29da0a90 unk_733c15d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
