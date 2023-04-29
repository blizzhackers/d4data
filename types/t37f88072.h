/**
 * Definition: t37f88072
 * Hash: 37f88072
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t37f88072 : public ComplexRead {
  DT_SNO<SnoGroup::Power> unk_c1a71c6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
