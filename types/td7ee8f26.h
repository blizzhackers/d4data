/**
 * Definition: td7ee8f26
 * Hash: d7ee8f26
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct td7ee8f26 : public ComplexRead {
  DT_SNO<SnoGroup::MaterialValue> snoMaterialValue;
  DT_INT nBitOffset;
  DT_VARIABLEARRAY<DT_FLOAT> unk_bbe4258;
  DT_FLOAT flDefaultValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
