/**
 * Definition: tc746470f
 * Hash: c746470f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc746470f : public ComplexRead {
  DT_UINT szBoneName;
  DT_FLOAT unk_dc25f93;
  DT_FLOAT unk_a5eb35;
  DT_FLOAT unk_36bc3de;
  DT_FLOAT flDuration;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
