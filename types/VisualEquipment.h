/**
 * Definition: VisualEquipment
 * Hash: 44e4708c
 */

#pragma once

#include "../types.h"
#include "VisualItem.h"

#pragma push(pack, 1)

struct VisualEquipment : public ComplexRead {
  DT_FIXEDARRAY<VisualItem, 15> tVisualItem;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
