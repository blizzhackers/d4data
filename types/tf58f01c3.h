/**
 * Definition: tf58f01c3
 * Hash: f58f01c3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf58f01c3 : public ComplexRead {
  DT_SNO<SnoGroup::MaterialValue> unk_ad7dd9c;
  DT_VECTOR4D vDefaultValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
