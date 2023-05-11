/**
 * Definition: t70e5b8b6
 * Hash: 70e5b8b6
 */

#pragma once

#include "../types.h"
#include "PrefabData.h"

#pragma push(pack, 1)

struct t70e5b8b6 : public ComplexRead {
  DT_UINT unk_770f3b7;
  PrefabData tPrefabData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
