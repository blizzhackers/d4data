/**
 * Definition: ACDTranslateDetPathSpiralMessage
 * Hash: 99214c30
 */

#pragma once

#include "../types.h"
#include "DPathSinData.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct ACDTranslateDetPathSpiralMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_ENUM<DT_INT> eDPath;
  DT_VECTOR3D vStartPos;
  DT_VECTOR3D vTargetPos;
  DT_UINT uMoveFlags;
  DT_FLOAT flVar0;
  DT_FLOAT flVar1;
  DPathSinData tSinData;
  DT_FLOAT flSpeedMult;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
