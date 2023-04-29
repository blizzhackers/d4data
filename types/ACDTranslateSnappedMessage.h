/**
 * Definition: ACDTranslateSnappedMessage
 * Hash: f8a41a86
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateSnappedMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_OPTIONAL<DT_INT> vDestX;
  DT_OPTIONAL<DT_INT> vDestY;
  DT_OPTIONAL<DT_INT> vDestZ;
  DT_FLOAT aDesiredYaw;
  DT_INT bSnapFacing;
  DT_UINT uMoveFlags;
  DT_OPTIONAL<DT_INT> uAckValue;
  DT_OPTIONAL<DT_INT> uCameraSmoothingTime;
  DT_OPTIONAL<DT_INT> unk_91b31d5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
