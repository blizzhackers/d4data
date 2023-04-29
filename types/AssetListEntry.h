/**
 * Definition: AssetListEntry
 * Hash: 46c0984e
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AssetListEntry : public ComplexRead {
  DT_INT nID;
  DT_UINT nIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
