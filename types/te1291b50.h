/**
 * Definition: te1291b50
 * Hash: e1291b50
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct te1291b50 : public ComplexRead {
  DT_ENUM<DT_INT> unk_1508f44;
  tf18a2f0 tName;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
