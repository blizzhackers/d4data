/**
 * Definition: t5eb6ade
 * Hash: 5eb6ade
 */

#pragma once

#include "../types.h"
#include "HardpointLink.h"

#pragma push(pack, 1)

struct t5eb6ade : public ComplexRead {
  HardpointLink unk_a1d7e72;
  DT_UINT unk_bd1644f;
  DT_FLOAT flWeight;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
