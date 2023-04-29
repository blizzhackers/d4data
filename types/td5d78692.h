/**
 * Definition: td5d78692
 * Hash: d5d78692
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct td5d78692 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_ACD_NETWORK_NAME ann;
  DT_VECTOR3D unk_5692531;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
