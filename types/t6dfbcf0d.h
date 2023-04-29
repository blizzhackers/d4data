/**
 * Definition: t6dfbcf0d
 * Hash: 6dfbcf0d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t6dfbcf0d : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_UINT unk_53f5f18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
