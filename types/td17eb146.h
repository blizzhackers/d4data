/**
 * Definition: td17eb146
 * Hash: d17eb146
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td17eb146 : public ComplexRead {
  DT_ENUM<DT_INT> eVariantType;
  DT_SNO<SnoGroup::Material> unk_fbac894;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
