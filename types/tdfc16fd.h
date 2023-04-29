/**
 * Definition: tdfc16fd
 * Hash: dfc16fd
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"

#pragma push(pack, 1)

struct tdfc16fd : public ComplexRead {
  HardpointLink unk_cf6449d;
  DT_VECTOR3D unk_64456dc;
  DT_ENUM<DT_INT> unk_ac782ba;
  DT_UINT szComponent;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
