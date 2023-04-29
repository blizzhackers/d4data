/**
 * Definition: te87d70c1
 * Hash: e87d70c1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te87d70c1 : public ComplexRead {
  DT_GBID<0x14> unk_1afeee0;
  DT_SNO<SnoGroup::Population> unk_2a1fbb4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
