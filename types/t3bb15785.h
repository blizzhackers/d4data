/**
 * Definition: t3bb15785
 * Hash: 3bb15785
 */

#pragma once

#include "../types.h"
#include "t39274139.h"

#pragma push(pack, 1)

struct t3bb15785 : public ComplexRead {
  DT_SNO<SnoGroup::Material> snoLayer;
  t39274139 tSettings;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
