/**
 * Definition: PrefabCustomization
 * Hash: 56bf0569
 */

#pragma once

#include "../types.h"
#include "tf4703db9.h"

#pragma push(pack, 1)

struct PrefabCustomization : public ComplexRead {
  DT_SNO<SnoGroup::MarkerSet> unk_b9550a0;
  DT_VARIABLEARRAY<tf4703db9> unk_a3efcf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
