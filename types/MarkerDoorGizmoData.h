/**
 * Definition: MarkerDoorGizmoData
 * Hash: 8ecad956
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct MarkerDoorGizmoData : public ComplexRead {
  DT_INT fDoorOpen;
  DT_INT unk_ec10912;
  DT_INT unk_41a0826;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
