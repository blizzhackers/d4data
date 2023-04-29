/**
 * Definition: t55ee8277
 * Hash: 55ee8277
 */

#pragma once

#include "../types.h"
#include "tfac0f318.h"

#pragma push(pack, 1)

struct t55ee8277 : public ComplexRead {
  tfac0f318 unk_3a75ef1;
  DT_SNO<SnoGroup::Texture> unk_68e0239;
  DT_FLOAT unk_a8bd38a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
