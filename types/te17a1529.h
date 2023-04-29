/**
 * Definition: te17a1529
 * Hash: e17a1529
 */

#pragma once

#include "../types.h"
#include "te852fd63.h"

#pragma push(pack, 1)

struct te17a1529 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_VARIABLEARRAY<te852fd63> unk_d192efe;
  DT_SNO<SnoGroup::MaterialValue> snoMaterialValue;
  DT_SNO<SnoGroup::Material> unk_111c745;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
