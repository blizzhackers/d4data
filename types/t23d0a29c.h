/**
 * Definition: t23d0a29c
 * Hash: 23d0a29c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t23d0a29c : public ComplexRead {
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Texture>> unk_c95587b;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Texture>> unk_e96b0b9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
