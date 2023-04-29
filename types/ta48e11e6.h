/**
 * Definition: ta48e11e6
 * Hash: a48e11e6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta48e11e6 : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_8855e60;
  DT_FLOAT unk_4e47826;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
