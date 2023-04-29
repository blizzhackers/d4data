/**
 * Definition: tcc15aee6
 * Hash: cc15aee6
 */

#pragma once

#include "../types.h"
#include "tc2e1c5fc.h"

#pragma push(pack, 1)

struct tcc15aee6 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::EffectGroup> unk_247a8fe;
  DT_INT unk_a0febeb;
  tc2e1c5fc unk_b1547cd;
  tc2e1c5fc unk_5370f4;
  tc2e1c5fc unk_36b012;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
