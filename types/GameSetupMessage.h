/**
 * Definition: GameSetupMessage
 * Hash: d1d5be50
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t587c11d4.h"

#pragma push(pack, 1)

struct GameSetupMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwFirstHeartbeat;
  DT_INT64 unk_35f9686;
  DT_INT unk_387b0e;
  t587c11d4 unk_4c6a043;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
