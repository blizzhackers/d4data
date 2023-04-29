/**
 * Definition: HirelingInfoUpdateMessage
 * Hash: bddf15e6
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct HirelingInfoUpdateMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_INT eClass;
  DT_INT fDead;
  DT_GBID<0xffffffff> gbidName;
  DT_UINT unk_dce541c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
