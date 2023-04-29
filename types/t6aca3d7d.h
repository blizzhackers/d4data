/**
 * Definition: t6aca3d7d
 * Hash: 6aca3d7d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t6aca3d7d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_a488aa6;
  DT_SNO<SnoGroup::Power> snoSkill;
  DT_VECTOR3D wpLocation;
  DT_FLOAT unk_bcab71e;
  DT_INT bForce;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
