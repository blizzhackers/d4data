/**
 * Definition: t8c33d728
 * Hash: 8c33d728
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8c33d728 : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
