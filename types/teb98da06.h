/**
 * Definition: teb98da06
 * Hash: eb98da06
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct teb98da06 : public ComplexRead {
  DT_SNO<SnoGroup::MaterialValue> unk_ad7dd9c;
  DT_FLOAT flDefaultValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
