/**
 * Definition: tc5e8044d
 * Hash: c5e8044d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc5e8044d : public ComplexRead {
  DT_FLOAT unk_30e0427;
  DT_FLOAT unk_2130773;
  DT_FLOAT unk_1149cd2;
  DT_FLOAT unk_10405ce;
  DT_FLOAT unk_96134cc;
  DT_FLOAT unk_498cae5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
