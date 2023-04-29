/**
 * Definition: ACDTranslateNormalMessage
 * Hash: 6ba8f5e4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateNormalMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_OPTIONAL<DT_INT> vDest;
  DT_OPTIONAL<DT_INT> aDesiredYaw;
  DT_OPTIONAL<DT_INT> bSnapFacing;
  DT_OPTIONAL<DT_INT> flMovementSpeed;
  DT_OPTIONAL<DT_INT> uMoveFlags;
  DT_OPTIONAL<DT_INT> unk_2a6bbab;
  DT_OPTIONAL<DT_INT> snoPowerPassability;
  DT_OPTIONAL<DT_INT> uAckValue;
  DT_OPTIONAL<DT_INT> eMoveType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
