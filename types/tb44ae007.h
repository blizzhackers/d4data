/**
 * Definition: tb44ae007
 * Hash: b44ae007
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tb44ae007 : public ComplexRead {
  DT_CSTRING unk_8f5373;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
