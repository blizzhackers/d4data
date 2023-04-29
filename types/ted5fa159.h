/**
 * Definition: ted5fa159
 * Hash: ed5fa159
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ted5fa159 : public ComplexRead {
  DT_SNO<SnoGroup::Material> unk_633271a;
  DT_SNO<SnoGroup::Material> unk_54b79bf;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
