/**
 * Definition: tdff70e83
 * Hash: dff70e83
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdff70e83 : public ComplexRead {
  DT_FIXEDARRAY<DT_SNO<SnoGroup::Item>, 3> unk_bd0bed5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
