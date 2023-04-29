/**
 * Definition: WorldSyncedDataMessage
 * Hash: e477fdad
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "WorldSyncedData.h"

#pragma push(pack, 1)

struct WorldSyncedDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  WorldSyncedData tSyncedData;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
