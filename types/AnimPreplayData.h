/**
 * Definition: AnimPreplayData
 * Hash: 8072d75c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimPreplayData : public ComplexRead {
  DT_UINT dwAnimPrePlayDataFlags;
  DT_UINT dwServerTimeAnimStarted;
  DT_UINT dwSyncedSeed;
  DT_OPTIONAL<DT_INT> unk_7e38ab5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
