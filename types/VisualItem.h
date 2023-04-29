/**
 * Definition: VisualItem
 * Hash: 5c983dc3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct VisualItem : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
