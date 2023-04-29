/**
 * Definition: TransmogSlot
 * Hash: fb1f3d4d
 */

#pragma once

#include "../types.h"
#include "Transmog.h"

#pragma push(pack, 1)

struct TransmogSlot : public ComplexRead {
  DT_ENUM<DT_INT> eSlot;
  Transmog tTransmog;
  DT_INT bEnabled;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
