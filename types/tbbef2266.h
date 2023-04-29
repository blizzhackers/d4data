/**
 * Definition: tbbef2266
 * Hash: bbef2266
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tbbef2266 : public ComplexRead {
  DT_SNO<SnoGroup::MaterialValue> snoMaterialValue;
  DT_VECTOR4D value;
  DT_INT unk_2362b28;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
