/**
 * Definition: td0677c85
 * Hash: d0677c85
 */

#pragma once

#include "../types.h"
#include "SavedCameraState.h"

#pragma push(pack, 1)

struct td0677c85 : public ComplexRead {
  DT_SNO<SnoGroup::World> snoWorld;
  SavedCameraState tCameraState;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
