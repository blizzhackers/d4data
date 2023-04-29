/**
 * Definition: SharedServerWorldPlace
 * Hash: ec9295b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SharedServerWorldPlace : public ComplexRead {
  DT_VECTOR3D wp;
  DT_SHARED_SERVER_DATA_ID idSWorld;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
