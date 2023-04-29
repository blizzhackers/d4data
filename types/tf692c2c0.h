/**
 * Definition: tf692c2c0
 * Hash: f692c2c0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf692c2c0 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::ItemRequirement> unk_91a7640;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
