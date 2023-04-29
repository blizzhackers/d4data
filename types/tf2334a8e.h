/**
 * Definition: tf2334a8e
 * Hash: f2334a8e
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"

#pragma push(pack, 1)

struct tf2334a8e : public ComplexRead {
  HardpointLink unk_e1f84a7;
  DT_FLOAT unk_18a0496;
  DT_FLOAT unk_18a0398;
  DT_RANGE<DT_INT> unk_5559079;
  DT_FLOAT aPitchMin;
  DT_FLOAT aPitchMax;
  DT_RANGE<DT_INT> unk_5d19a0;
  DT_FLOAT aPitchOffset;
  DT_FLOAT aSpeed;
  DT_INT bYawOnly;
  DT_INT unk_e560406;
  DT_FLOAT flDelay;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
