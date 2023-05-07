/**
 * Definition: t16f8c8eb
 * Hash: 16f8c8eb
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t665f557c.h"
#include "t7ae253c2.h"

#pragma push(pack, 1)

struct t16f8c8eb : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_VECTOR3D wpStart;
  DT_VECTOR3D vVelocity;
  DT_VECTOR3D unk_5aa0d1f;
  DT_INT unk_be8c5f6;
  DT_FLOAT flProjectileRadius;
  DT_FLOAT unk_dab04b2;
  DT_OPTIONAL<DT_INT> unk_efca38;
  DT_FIXEDARRAY<t7ae253c2, 4> unk_64595d0;
  DT_INT unk_81f3430;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
