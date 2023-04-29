/**
 * Definition: td4338bac
 * Hash: d4338bac
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "bcQuat.h"

#pragma push(pack, 1)

struct td4338bac : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_VECTOR3D vPos;
  bcQuat qRot;
  DT_VECTOR3D vVel;
  DT_OPTIONAL<DT_INT> unk_a25a877;
  DT_OPTIONAL<DT_INT> uMoveFlags;
  DT_OPTIONAL<DT_INT> unk_2a6bbab;
  DT_OPTIONAL<DT_INT> flSpeedMult;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
