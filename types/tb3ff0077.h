/**
 * Definition: tb3ff0077
 * Hash: b3ff0077
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct tb3ff0077 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_INT unk_9058b77;
  DT_VECTOR2D vecPosition;
  DT_CSTRING szText;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
