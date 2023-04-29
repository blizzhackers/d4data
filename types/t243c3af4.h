/**
 * Definition: t243c3af4
 * Hash: 243c3af4
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t243c3af4 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_SHARED_SERVER_DATA_ID idSWorld;
  DT_VECTOR3D wpStart;
  DT_VECTOR3D wpEnd;
  DT_INT unk_e1ac6f5;
  DT_VECTOR3D wpPosition;
  DT_VECTOR3D wpNormal;
  DT_SNO<SnoGroup::Appearance> unk_1c414e5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
