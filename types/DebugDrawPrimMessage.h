/**
 * Definition: DebugDrawPrimMessage
 * Hash: b5b66092
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct DebugDrawPrimMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT uID;
  DT_ENUM<DT_INT> eType;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_FIXEDARRAY<DT_VECTOR3D, 8> vecPos;
  DT_FLOAT flLength;
  DT_FLOAT flRadius;
  DT_FLOAT flHeight;
  DT_UINT uLifetimeInTicks;
  DT_RGBACOLOR rgbaColor;
  DT_CHARARRAY<128> szText;
  DT_INT unk_7fff437;
  DT_INT bONZ;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
