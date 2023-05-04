/**
 * Definition: SpawnLocType
 * Hash: 4dffd2e9
 */

#pragma once

#include "../types.h"
#include "GBIDHeader.h"

#pragma push(pack, 1)

struct SpawnLocType : public ComplexRead {
  GBIDHeader tHeader;
  DT_ENUM<DT_INT> eCategory;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
