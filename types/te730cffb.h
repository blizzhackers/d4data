/**
 * Definition: te730cffb
 * Hash: e730cffb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te730cffb : public ComplexRead {
  DT_RANGE<DT_INT> unk_2f97460;
  DT_FLOAT unk_90a5a75;
  DT_SNO<SnoGroup::Population> unk_1ad4878;
  DT_RANGE<DT_INT> unk_b0e2c7;
  DT_INT unk_49f6f23;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
