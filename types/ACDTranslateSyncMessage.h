/**
 * Definition: ACDTranslateSyncMessage
 * Hash: 32ecc1d8
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateSyncMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_OPTIONAL<DT_INT> vDestX;
  DT_OPTIONAL<DT_INT> vDestY;
  DT_OPTIONAL<DT_INT> vDestZ;
  DT_OPTIONAL<DT_INT> bSnap;
  DT_OPTIONAL<DT_INT> uAckValue;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
