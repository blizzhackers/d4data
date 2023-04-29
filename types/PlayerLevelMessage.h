/**
 * Definition: PlayerLevelMessage
 * Hash: 9f34c38a
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PlayerLevelMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_INT nNewLevel;
  DT_UINT unk_6b387a1;
  DT_INT unk_1e075bd;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
