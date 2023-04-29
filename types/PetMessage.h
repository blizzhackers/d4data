/**
 * Definition: PetMessage
 * Hash: 61796f0e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"
#include "t69ebc9fa.h"

#pragma push(pack, 1)

struct PetMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_70bf7e7;
  DT_INT nIndex;
  DT_ACD_NETWORK_NAME annPet;
  DT_GBID<0x17> gbidPetType;
  DT_OPTIONAL<DT_INT> unk_267e8b4;
  DT_OPTIONAL<DT_INT> unk_9e938b5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
