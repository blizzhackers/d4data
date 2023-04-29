/**
 * Definition: AssetList
 * Hash: 3d8c39bc
 */

#pragma once

#include "../types.h"
#include "AssetListEntry.h"

#pragma push(pack, 1)

struct AssetList : public ComplexRead {
  DT_VARIABLEARRAY<AssetListEntry> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
