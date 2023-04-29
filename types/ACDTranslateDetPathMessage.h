/**
 * Definition: ACDTranslateDetPathMessage
 * Hash: f3b61c45
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t818076d1.h"

#pragma push(pack, 1)

struct ACDTranslateDetPathMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ENUM<DT_INT> eDPath;
  t818076d1 tSeed;
  DT_VECTOR3D wvVelocity;
  DT_FLOAT aOriginalYaw;
  DT_VECTOR3D vStartPos;
  DT_VECTOR3D vTargetPos;
  DT_UINT uMoveFlags;
  DT_SNO<SnoGroup::Power> snoPowerPassability;
  DT_INT unk_7f07229;
  DT_FLOAT flVar0;
  DT_FLOAT flVar1;
  DT_FLOAT flVar2;
  DT_FLOAT flVar3;
  DT_FLOAT flVar4;
  DT_FLOAT flSpeedMult;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
