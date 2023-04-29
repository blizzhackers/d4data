/**
 * Definition: TransmogSlotMessage
 * Hash: 3d04ae12
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct TransmogSlotMessage : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ENUM<DT_INT> eSlot;
  DT_SNO<SnoGroup::Item> unk_9c2495b;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
