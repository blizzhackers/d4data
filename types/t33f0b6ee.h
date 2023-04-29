/**
 * Definition: t33f0b6ee
 * Hash: 33f0b6ee
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t33f0b6ee : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_VECTOR3D unk_1833d57;
  DT_FLOAT flSecs;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
