/**
 * Definition: t876a2db1
 * Hash: 876a2db1
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t876a2db1 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT nSlot;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
