/**
 * Definition: PlayerSavedDataMessage
 * Hash: 3cd0b59f
 */

#pragma once

#include "../types.h"
#include "PlayerSavedData.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerSavedDataMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  PlayerSavedData tSavedData;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
