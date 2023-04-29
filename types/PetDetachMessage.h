/**
 * Definition: PetDetachMessage
 * Hash: 9246f517
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct PetDetachMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME annPet;
  DT_INT bDisplayChatMessage;
  DT_UINT unk_70bf7e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
