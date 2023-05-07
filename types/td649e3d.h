/**
 * Definition: td649e3d
 * Hash: d649e3d
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td649e3d : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT dwPortalType;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
