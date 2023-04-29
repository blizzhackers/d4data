/**
 * Definition: RotationKey
 * Hash: a4034979
 */

#pragma once

#include "../types.h"
#include "Quaternion16.h"

#pragma push(pack, 1)

struct RotationKey : public ComplexRead {
  DT_INT nFrame;
  Quaternion16 q16;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
