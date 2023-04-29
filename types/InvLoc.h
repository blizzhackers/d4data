/**
 * Definition: InvLoc
 * Hash: b251240b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct InvLoc : public ComplexRead {
  DT_ACD_NETWORK_NAME annOwner;
  DT_ENUM<DT_INT> eSlot;
  DT_INT nSlotX;
  DT_INT nSlotY;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
