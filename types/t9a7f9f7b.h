/**
 * Definition: t9a7f9f7b
 * Hash: 9a7f9f7b
 */

#pragma once

#include "../types.h"
#include "t2bcf7514.h"
#include "t97fcd9a3.h"

#pragma push(pack, 1)

struct t9a7f9f7b : public ComplexRead {
  t97fcd9a3 tPitch;
  t97fcd9a3 tYaw;
  t97fcd9a3 tRoll;
  t97fcd9a3 tTurret;
  t97fcd9a3 tFOV;
  t2bcf7514 tMovementSpeed;
  t2bcf7514 unk_8023fd7;
  DT_FLOAT unk_6399d3e;
  DT_FLOAT unk_4256dac;
  DT_FLOAT unk_125c54c;
  DT_FLOAT unk_3294a2;
  DT_FLOAT unk_2f6e0dd;
  DT_FLOAT unk_ff7e332;
  DT_FLOAT unk_6e6acb6;
  DT_INT unk_7122fb9;
  DT_INT unk_71789fc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
