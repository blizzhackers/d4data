/**
 * Definition: t18fbc228
 * Hash: 18fbc228
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t18fbc228 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwObjectID;
  DT_UINT unk_bd1644f;
  DT_FLOAT aThreshold;
  DT_FLOAT unk_d74c75c;
  DT_INT unk_77ca12a;
  DT_INT unk_23237e1;
  DT_FLOAT unk_f1b6afc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
