/**
 * Definition: PresetNPCComponent
 * Hash: b44ae007
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PresetNPCComponent : public ComplexRead {
  DT_CSTRING component;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
