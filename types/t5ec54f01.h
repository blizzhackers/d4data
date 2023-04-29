/**
 * Definition: t5ec54f01
 * Hash: 5ec54f01
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5ec54f01 : public ComplexRead {
  DT_UINT unk_272cae5;
  DT_SNO<SnoGroup::Material> snoMaterialOverride;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
