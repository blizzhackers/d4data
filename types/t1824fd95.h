/**
 * Definition: t1824fd95
 * Hash: 1824fd95
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"
#include "t1d0f43e.h"

#pragma push(pack, 1)

struct t1824fd95 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  t1d0f43e unk_6f68ae7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
