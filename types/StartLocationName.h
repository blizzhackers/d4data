/**
 * Definition: StartLocationName
 * Hash: 167a36a8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StartLocationName : public ComplexRead {
  DT_UINT uGUID;
  DT_CHARARRAY<64> szName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
