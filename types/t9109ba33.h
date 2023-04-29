/**
 * Definition: t9109ba33
 * Hash: 9109ba33
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9109ba33 : public ComplexRead {
  DT_INT unk_d80ac35;
  DT_VARIABLEARRAY<DT_INT> unk_2707579;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
