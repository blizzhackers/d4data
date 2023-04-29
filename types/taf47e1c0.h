/**
 * Definition: taf47e1c0
 * Hash: af47e1c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taf47e1c0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_e0aad12;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
