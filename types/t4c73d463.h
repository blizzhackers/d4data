/**
 * Definition: t4c73d463
 * Hash: 4c73d463
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4c73d463 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME unk_8789586;
  DT_SNO<SnoGroup::Actor> snoMonster;
  DT_VECTOR3D wpLocation;
  DT_INT bRemove;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
