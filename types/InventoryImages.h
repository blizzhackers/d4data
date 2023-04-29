/**
 * Definition: InventoryImages
 * Hash: d92968e4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct InventoryImages : public ComplexRead {
  DT_UINT hDefaultImage;
  DT_UINT hFemaleImage;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
