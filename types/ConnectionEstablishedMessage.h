/**
 * Definition: ConnectionEstablishedMessage
 * Hash: 493f75fd
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ConnectionEstablishedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwGameAccountId;
  DT_UINT dwAnimSyncedSeed;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
