/**
 * Definition: t90de2b1e
 * Hash: 90de2b1e
 */

#pragma once

#include "../types.h"
#include "TransmogSlot.h"

#pragma push(pack, 1)

struct t90de2b1e : public ComplexRead {
  DT_INT bUnlocked;
  DT_FIXEDARRAY<TransmogSlot, 15> arTransmogSlots;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
