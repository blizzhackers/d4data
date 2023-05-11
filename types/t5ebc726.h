/**
 * Definition: t5ebc726
 * Hash: 5ebc726
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5ebc726 : public ComplexRead {
  DT_VARIABLEARRAY<DT_WORD> unk_7ef82a3;
  DT_INT ibid;
  DT_INT unk_5a1810c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
