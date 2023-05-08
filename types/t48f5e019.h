/**
 * Definition: t48f5e019
 * Hash: 48f5e019
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t48f5e019 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::ParagonBoard> snoBoard;
  DT_ENUM<DT_INT> eRotation;
  DT_UINT unk_9b6955a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
